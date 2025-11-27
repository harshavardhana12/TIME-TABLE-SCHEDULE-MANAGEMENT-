

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


### **2. Add Task Screen**


Enter Task ID: 1
Enter Task Title: Math Lecture
Enter Day: Monday
Enter Time: 10:00 AM
Enter Description: Algebra Chapter-2
Task Added Successfully!


### **3. Display Tasks Output**


=========== Task List ===========

ID: 1
Title: Math Lecture
Day: Monday
Time: 10:00 AM
Description: Algebra Chapter-2

### **4. Delete Task Output**


Enter Task ID to delete: 1
Task Deleted Successfully!


---

## ✔ Author  
Created for academic & project use.

✅ 3. Abstract

The Time Table & Schedule Management System is a console-based program written in C to help users organize and manage daily tasks. The system allows users to add, view, update, and delete scheduled entries stored in a text file, ensuring persistent data storage. This project demonstrates file handling, string manipulation, and structured programming concep
