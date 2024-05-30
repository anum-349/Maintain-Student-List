# Student List Management System

This is a simple C++ program to manage a list of student names with various functionalities such as inserting, deleting, updating, and finding names within the list.

## Table of Contents
- [Features](#features)
- [How to Use](#how-to-use)
- [Class Details](#class-details)
- [Author](#author)

## Features
- **Insert Name:** Add a new student name to the list in a sorted order.
- **Delete Last Name:** Remove the last student name from the list.
- **Delete Any Name:** Remove a specific student name from the list.
- **Delete First Name:** Remove the first student name from the list.
- **Get Name by Subscript:** Retrieve a student name using its index in the list.
- **Find by Name:** Search for a student name and get its index.
- **Display List of Students:** Print all student names currently in the list.
- **Update List:** Update a student name at a specific index.

## How to Use
1. Open the C++ program in your preferred IDE or compile it using a C++ compiler.
2. Run the program.
3. Follow the on-screen instructions to choose an operation by entering the corresponding number.
4. Perform actions such as inserting, deleting, updating, and finding student names based on the menu options.

## Class Details
- **Class Name:** `studentlist`
- **Member Variables:**
  - `string* name`: Dynamic array to store student names.
  - `int size`: Size of the dynamic array.
  - `int noofstudents`: Current number of students in the list.
- **Member Functions:**
  - **Destructor:** `~studentlist()`
    - Frees the allocated memory for the student names array.
  - **Constructor:** `studentlist()`
    - Prompts the user to enter the size of the array and initializes member variables.
  - **Insert an Item:** `void insertanitem(string n)`
    - Inserts a student name in the list while maintaining sorted order.
  - **Update:** `void update(int n)`
    - Updates the name at a specified index.
  - **Print:** `void print()`
    - Displays all student names in the list.
  - **Delete First Value:** `void deletefirstvalue()`
    - Deletes the first student name in the list.
  - **Delete Last Value:** `void deletelastvalue()`
    - Deletes the last student name in the list.
  - **Delete Any Value:** `void deleteanyvalue(string n)`
    - Deletes a specified student name from the list.
  - **Find:** `void find(string n)`
    - Searches for a student name and prints its index if found.
  - **Get Value:** `void getvalue(int n)`
    - Retrieves and prints the student name at a specified index.

## Author
Anum Kousar

---

**Note:** Replace `[Your Name]` with your actual name before using this README.
