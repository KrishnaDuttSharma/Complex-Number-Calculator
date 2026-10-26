# Complex Number Calculator – C++

A simple menu-driven **Complex Number Calculator** developed in C++ using Object-Oriented Programming (OOP) concepts.

## Project Overview

This project performs basic arithmetic operations on complex numbers. It allows the user to enter two complex numbers and perform addition and subtraction through a simple console-based menu.

## Features

- Create and store complex numbers using a `Complex` class.
- Add two complex numbers using `+` operator overloading.
- Subtract two complex numbers using `-` operator overloading.
- Display complex numbers using `<<` operator overloading.
- Menu-driven console interface.
- Uses constructors for object initialization.
- Uses encapsulation by keeping data members private.
- Handles invalid menu choices.

## Approach

The project is designed using a `Complex` class containing the real and imaginary parts of a complex number. Constructors are used to initialize complex number objects.

Operator overloading is used to make arithmetic operations simple and readable. The `+` operator performs addition of two complex number objects, while the `-` operator performs subtraction. The `<<` operator is overloaded to display the complex number in a readable format.

A menu-driven interface is implemented using a `switch` statement and loop so that the user can perform multiple operations until choosing the Exit option.

## OOP Concepts Used

- Classes and Objects
- Encapsulation
- Constructors
- Operator Overloading
- Friend Function
