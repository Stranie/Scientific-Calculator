# Scientific Calculator

A console-based scientific calculator written in C++.

This project was developed as a learning project to practice C++ fundamentals,
program structure, input validation, error handling, and Git-based version control.

## Features

### Basic Operations
- Addition
- Subtraction
- Multiplication
- Division
- Absolute value

### Powers, Roots & Logarithms
- Powers
- N-th roots
- Natural logarithm
- Logarithms with a custom base

### Trigonometry
- Sine
- Cosine
- Tangent

## Input Validation

The calculator validates user input before performing calculations.

It handles cases such as:
- Non-numeric input
- Invalid integer input
- Division by zero
- Invalid roots
- Invalid logarithm arguments
- Invalid logarithm bases
- Invalid menu selections

Operations that may not produce a valid real-number result use
`std::optional<double>` to represent failure safely.

## Project Structure

The project is split into multiple source and header files to separate
responsibilities:

- `MathFunctions.h / .cpp` — mathematical operations
- `InputFunctions.h / .cpp` — input parsing and validation
- `UI.h / .cpp` — calculator menus and user interface
- Main source file — program flow and menu handling

## Technologies

- C++
- C++ Standard Library
- `<cmath>`
- `<optional>`
- Git

## Building and Running

The project can be built using a C++ compiler with support for the required
standard library features.

The project was developed using Microsoft Visual Studio.

1. Clone the repository.
2. Open the project/solution in Visual Studio.
3. Build the solution.
4. Run the console application.

## What I Learned

Through this project, I practiced:

- Breaking a program into functions
- Organizing C++ code across header and source files
- Passing values by reference
- Using `std::optional`
- Validating and parsing user input
- Handling mathematical domain errors
- Using functions from the C++ standard library
- Designing menus and program control flow
- Using Git for incremental version control

## Version

**v1.0**

First complete release of the Scientific Calculator.