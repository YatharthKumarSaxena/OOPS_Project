# 🛒 Welcome to the Raw Design of the Project!

> **I'm the README.md file of this folder, here to guide you step-by-step!** 🚀

---

## 🔗 Table of Contents

- [🖊️ Introduction](#-introduction)
- [🗂️ Folder Structure](#-folder-structure)
- [🔧 Key Features](#-key-features)
- [🌟 Future Enhancements](#-future-enhancements)
- [🎯 **Final Takeaway**](#-final-takeaway)

---

## 🖊️ **Introduction**

This file represents the raw design of the project as it was initially conceptualized. The project aims to simulate a **Shopping Management System** named **EasyBuy** using Object-Oriented Programming principles in C++. The project revolves around a hierarchy of classes representing products, items, brands, and varieties to manage a comprehensive shopping system.

The primary focus at this stage was on:
- Establishing the relationships among classes.
- Implementing basic functionalities like adding and displaying information.
- Understanding the hierarchical structure of objects.

---

## 🗂️ **Folder Structure**

This folder contains a single file:

- 📄 **raw_design.cpp**: The main C++ file that contains the initial raw design implementation of the project.

---

## 🔧 **Key Features**

1. **Classes and Hierarchy**:
   - The design includes a structured hierarchy of classes: `Variety`, `Brand`, `Item`, `Product`, and `ShoppingManagementSystem`.
   - Each class encapsulates relevant properties and functionalities.

2. **Static Members**:
   - Use of static vectors for storing unique IDs to prevent duplication.

3. **Add and Display Methods**:
   - Methods for adding new varieties, brands, items, and products while ensuring uniqueness.
   - Display methods to showcase details of each object in the hierarchy.

4. **Encapsulation**:
   - Private members with public methods to ensure data integrity and control access.

5. **Focus on User Interaction**:
   - Console-based inputs to simulate the addition and management of shopping system components.

---

## 🌟 **Future Enhancements**

- **Polymorphism**: Introduce polymorphic behavior to streamline functionality and enhance flexibility.
- **Error Handling**: Improve error-checking mechanisms for invalid inputs.
- **Data Persistence**: Add functionality to save and retrieve data from files or databases.
- **UI Improvements**: Build a graphical user interface for better usability.
- **Integration**: Connect with inventory management or payment systems for a complete solution.

---

## **Compilation and Execution**

### 1. Compilation and Execution:
   - Navigate to the project directory.
   - Compile the files:
     ```bash
     g++ -o OnlineShoppingManagementSystem MainProgram.cpp FunctionsOfOSMS.cpp class.cpp
     ```
   - Run the `MainProgram.cpp` file to execute the program:
     ```bash
     ./OnlineShoppingManagementSystem
     ```

### 2. Expected Behavior:
   - Program starts with a user-friendly interface.
   - Users can browse products, explore categories, and leave feedback.

---

## 🎯 **Final Takeaway**

This raw design lays the foundation for a robust Shopping Management System. At this stage, the project demonstrates the hierarchical relationships among its core components and encapsulates basic functionalities. While it lacks advanced features and error handling, it represents a clear roadmap for future enhancements.

