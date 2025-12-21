# Student Record Search System (C)

## 📌 About the Project
This project was originally developed in **2022** as an academic mini project
to practice C programming fundamentals.

It allows searching student records using multiple attributes such as
roll number, name, birth year, and gender.

## ✨ Features
- Search by roll number
- Search by first name or last name
- Search by birth year
- Search by gender
- Basic approximate (fuzzy) string matching

## 🔍 Search Logic
The system supports basic approximate (fuzzy) string matching.
This allows users to retrieve relevant records even if the input
contains minor spelling variations.

## 🛠 Technologies Used
- Language: C
- Concepts:
  - Structures
  - Arrays
  - Functions
  - String handling

## ▶ How to Run
```bash
gcc src/main.c -o student_search
./student_search

## 🚀 Future Improvements
- Replace static array with database-backed storage
- Implement advanced string matching algorithms