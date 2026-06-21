# Object-Oriented Programming (OOP)

This folder contains coursework completed for **Object-Oriented Programming**, covering core OOP concepts in C++ through lab assignments and a term project.

## Contents

- `Assignments/` – Lab assignments covering constructors, copy semantics, dynamic memory, and operator overloading
- `ECommerceManagementSystem/` – Term project: a C++ E-Commerce Management System

## Topics Covered

- Shallow vs. deep copy constructors
- Dynamic memory management using `char*` (without `std::string`)
- Operator overloading
- Static members
- Multi-file class organization (separating declarations and definitions across headers and source files)
- Class hierarchies and inheritance
- Polymorphism (virtual functions, abstract classes)
- The Rule of Three (copy constructor, copy assignment operator, destructor)

## Term Project: E-Commerce Management System

A C++ project built around 17+ classes organized across four class hierarchies, simulating core e-commerce functionality (users, products, orders, etc.). Key challenges resolved during development:

- Circular `#include` dependencies between related classes
- Rule of Three violations causing memory issues
- Linker errors from multi-file class structuring
- Bugs in polymorphic behavior across the class hierarchies

## How to Use

1. Open the relevant `.cpp`/`.h` files in Visual Studio (project uses `strcpy_s` conventions, consistent with PF coursework).
2. Build and run to test functionality.
3. For the term project, check for any project/solution files needed to compile all source files together.

## Purpose

- Practice applying OOP principles beyond procedural programming
- Build comfort with multi-file C++ projects and the issues that come with them (linking, circular includes, memory ownership)
- Produce a substantial project demonstrating class design and hierarchy structuring

## Author

**Muhammad Asad Ullah**
BS Computer Science, University of Central Punjab
