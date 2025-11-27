#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Task {
    int id;
    char title[50];
    char day[20];
    char time[20];
    char description[100];
};

void addTask();
void viewTasks();
void deleteTask();
void updateTask();

int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf(" TIME TABLE & SCHEDULE MANAGER\n");
        printf("==============================\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Update Task\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addTask();
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            updateTask();
            break;
        case 4:
            deleteTask();
            break;
        case 5:
            printf("Exiting Program...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void addTask() {
    struct Task t;
    FILE *fp = fopen("tasks.txt", "a");

    if (fp == NULL) {
        printf("File Error!\n");
        return;
    }

    printf("Enter Task ID: ");
    scanf("%d", &t.id);
    fflush(stdin);

    printf("Enter Task Title: ");
    gets(t.title);

    printf("Enter Day: ");
    gets(t.day);

    printf("Enter Time: ");
    gets(t.time);

    printf("Enter Description: ");
    gets(t.description);

    fprintf(fp, "%d|%s|%s|%s|%s\n", t.id, t.title, t.day, t.time, t.description);
    fclose(fp);

    printf("Task Added Successfully!\n");
}

void viewTasks() {
    struct Task t;
    FILE *fp = fopen("tasks.txt", "r");
    char line[200];

    if (fp == NULL) {
        printf("No tasks found.\n");
        return;
    }

    printf("\n=========== Task List ===========\n");

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%d|%[^|]|%[^|]|%[^|]|%[^|]", &t.id, t.title, t.day, t.time, t.description);

        printf("\nID: %d\nTitle: %s\nDay: %s\nTime: %s\nDescription: %s\n",
               t.id, t.title, t.day, t.time, t.description);
        printf("---------------------------------\n");
    }

    fclose(fp);
}

void deleteTask() {
    struct Task t;
    FILE *fp = fopen("tasks.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    int id, found = 0;
    char line[200];

    if (fp == NULL) {
        printf("No tasks to delete.\n");
        return;
    }

    printf("Enter Task ID to delete: ");
    scanf("%d", &id);

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%d|%[^|]|%[^|]|%[^|]|%[^|]", &t.id, t.title, t.day, t.time, t.description);

        if (t.id != id) {
            fprintf(temp, "%s", line);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("tasks.txt");
    rename("temp.txt", "tasks.txt");

    if (found)
        printf("Task Deleted Successfully!\n");
    else
        printf("Task ID not found.\n");
}

void updateTask() {
    struct Task t;
    FILE *fp = fopen("tasks.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    int id, found = 0;
    char line[200];

    if (fp == NULL) {
        printf("No tasks to update.\n");
        return;
    }

    printf("Enter Task ID to update: ");
    scanf("%d", &id);
    fflush(stdin);

    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%d|%[^|]|%[^|]|%[^|]|%[^|]", &t.id, t.title, t.day, t.time, t.description);

        if (t.id == id) {
            found = 1;

            printf("Enter New Title: ");
            gets(t.title);

            printf("Enter New Day: ");
            gets(t.day);

            printf("Enter New Time: ");
            gets(t.time);

            printf("Enter New Description: ");
            gets(t.description);
        }

        fprintf(temp, "%d|%s|%s|%s|%s\n", t.id, t.title, t.day, t.time, t.description);
    }

    fclose(fp);
    fclose(temp);

    remove("tasks.txt");
    rename("temp.txt", "tasks.txt");

    if (found)
        printf("Task Updated Successfully!\n");
    else
        printf("Task ID not found.\n");
}
