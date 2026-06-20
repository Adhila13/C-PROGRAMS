# 📂 File-Based Student Record System

## 📖 Description

This C project demonstrates file handling using structures and arrays. The program accepts student details from the user, stores them in a text file, and then reads the stored records back from the file for display.

The project was developed to practice file operations and data management in C programming.

---

## ✨ Features

- Store multiple student records using structures
- Write records to a text file
- Read records from a text file
- Display stored records on the console
- Use arrays of structures
- Handle formatted file input and output

---

## 🛠️ Concepts Used

- Structures
- Arrays of Structures
- File Handling
- `fopen()`
- `fclose()`
- `fprintf()`
- `fscanf()`
- `fgets()`
- Loops
- Formatted Input/Output

---

## 📋 Student Information Stored

Each student record contains:

- Name
- Roll Number
- Semester
- Branch
- CGPA

---

## ⚙️ How It Works

1. Accept student details from the user.
2. Open a file in write mode.
3. Store records using `fprintf()`.
4. Close the file.
5. Reopen the file in read mode.
6. Read the file header using `fgets()`.
7. Read student records using `fscanf()`.
8. Display the records on the screen.

---

## 📄 Sample File Content

```text
----STUDENT RECORD----

Name:Adhila
Roll Number:5
semester:4
branch:ECE
CGPA:9.80

Name:Sher
Roll Number:56
semester:4
branch:ECE
CGPA:9.00
```

---

## 🎯 Learning Outcomes

Through this project, I learned:

- Creating and opening files in C
- Writing data to files
- Reading data from files
- Using file pointers
- Managing structured data
- Working with formatted text files

---

## 👩‍💻 Author

**Adhila Thasneem R**  
B.Tech Electronics and Communication Engineering (ECE)
