# Time Table & Schedule Management System (C Language)

A simple console-based time table & schedule manager written in C.  
This program allows users to add, view, update, and delete scheduled tasks.



✅  Abstract ##

The Time Table & Schedule Management System is a console-based program written in C to help users organize and manage daily tasks. The system allows users to add, view, update, and delete scheduled entries stored in a text file, ensuring persistent data storage. This project demonstrates file handling, string manipulation, and structured programming concep

---

## 📌 Features

- Add tasks with ID, title, day, time, and description  
- Display stored tasks  
- Update existing tasks  
- Delete tasks  
- Data stored permanently in `tasks.txt`  
- Simple console UI  

---

## 🛠 Technical Requirements

- C Compiler (GCC recommended)
- Windows / Linux / Mac OS
- Text editor (VS Code, Notepad++, etc.)

---

## ⚙ Functional Requirements

- User should be able to add new schedule entries.
- System must display all tasks from the file.
- System must update tasks when user provides an ID.
- System must delete tasks by ID.
- System stores all data in a structured text file.

---

## ▶ How to Run

### **Step 1: Save Program**
Save the C program as:


timetable.c


### **Step 2: Compile**


gcc timetable.c -o timetable


### **Step 3: Run**


./timetable


---

## 🗂 Data Storage Format: tasks.txt

Each record is saved as:



ID|Title|Day|Time|Description


Example:



1|Math Class|Monday|10:00 AM|Chapter 4 Lecture


---

## 🖼 Screenshots (Console Output)

### **1. Program Menu**

==============================
TIME TABLE & SCHEDULE MANAGER

Add Task

View Tasks

Update Task

Delete Task

Exit
==============================
Enter your choice:


<img width="493" height="235" alt="Screenshot 2025-11-27 190525" src="https://github.com/user-attachments/assets/e2f7b0b0-6868-485d-8215-0fbc886103f5" />


### **2. Add Task Screen**


Enter Task ID: 101
Enter Task Title: Math 
Enter Day: Monday
Enter Time: 10:00 AM
Enter Description: calculs
Task Added Successfully!

<img width="328" height="138" alt="Screenshot 2025-11-27 191933" src="https://github.com/user-attachments/assets/6cfccc80-ead6-4c3e-844d-3b4567f84f3e" />


### **3. Display Tasks Output**


=========== Task List ===========

ID: 101
Title: Math 
Day: Monday
Time: 10:00 AM
Description: calculus


<img width="356" height="203" alt="Screenshot 2025-11-27 192053" src="https://github.com/user-attachments/assets/65ce289a-274d-40cf-80a0-501ac9bf80cf" />


### **4. Delete Task Output**


Enter Task ID to delete: 101
Task Deleted Successfully!

<img width="356" height="146" alt="Screenshot 2025-11-27 192138" src="https://github.com/user-attachments/assets/3f956074-d161-482c-b035-3d0473e2100f" />

5 exit

<img width="285" height="56" alt="image" src="https://github.com/user-attachments/assets/40520877-ab3c-4a5b-ae0b-cc4de8933887" />


## ✔ Author  
Created for academic & project use.
A HARSHAVARDHAN


