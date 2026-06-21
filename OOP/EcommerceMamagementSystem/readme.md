# E-Commerce Management System

A C++ term project for the Object-Oriented Programming course, simulating the core structure of an e-commerce platform. The project applies OOP principles across a multi-class, multi-hierarchy design rather than a single-file procedural approach.

## Overview

The system is built around **17+ classes organized across four class hierarchies**, modeling entities such as users, products, orders, and related e-commerce operations. The focus of the project was less about UI and more about correctly applying OOP design: inheritance, polymorphism, encapsulation, and proper resource management across multiple files.

## Key Design Elements

- Four distinct class hierarchies, each modeling a different part of the system
- Inheritance used to share behavior across related classes (e.g. different user or product types)
- Virtual functions and abstract base classes to support polymorphic behavior
- Multi-file structure: class declarations in headers, definitions in source files

## Challenges Resolved

Building a project this size surfaced several real-world C++ issues beyond textbook OOP:

- **Circular `#include` dependencies** between classes that reference each other, resolved using forward declarations and careful header structuring
- **Rule of Three violations** — missing or incorrect copy constructors/assignment operators/destructors causing memory issues (double frees, shallow copies of owned resources)
- **Linker errors** from improper separation of declarations and definitions across multiple files
- **Polymorphism bugs** — incorrect virtual function behavior and object slicing when handling derived classes through base class pointers/references

## How to Build & Run

1. Open the project files in Visual Studio (or compile manually with g++, ensuring all `.cpp` files are included in the build command).
2. Build the full solution — all source files must compile together due to the multi-file class structure.
3. Run the executable to test the system's functionality.

## Purpose

This project was built to:

- Apply OOP concepts to a project large enough to require real architectural decisions
- Practice managing a multi-file C++ codebase and the linking/include issues that come with it
- Get hands-on experience debugging memory and polymorphism issues that don't show up in smaller exercises
- Serve as the main deliverable and viva preparation reference for the OOP course

## Author

**Muhammad Asad Ullah**
BS Computer Science, University of Central Punjab
