# embedded-unit-test-calculator
C-based calculator with Python unit tests for embedded systems development. Implements arithmetic operations with error handling and follows V-Model testing using Python's unittest. Includes Makefile for automated build &amp; test execution.

# Calculator with C and Python Testing

This project implements a simple calculator in C that performs basic arithmetic operations: addition, subtraction, multiplication, and division. The program is tested using Python's `unittest` framework, which interacts with the C program via subprocesses to validate the correctness of each operation.

## Features
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`), including error handling for division by zero.

## Folder Structure
📁 calculatorTesting  
 ├── 📁 src  
 │   ├── calculator.c  # Calculator logic  
 │   ├── calculator.h  # Header file with function declarations  
 │   ├── main.c        # Main program with user interaction  
 ├── 📁 tests  
 │   ├── test_calculator.py  # Python unit tests  
 ├── Makefile          # Makefile for building and testing the project  
 ├── README.md         # Project documentation  

## Prerequisites

To build and test the project, ensure you have the following installed:

- GCC (GNU Compiler Collection)
- Python 3.x
- Python `unittest` module (comes pre-installed with Python)

## Installation

1. Clone the repository:

   git clone https://github.com/rejdali-mustapha/embedded-unit-test-calculator.git

2. Build the project using make:

   make build
   make test

## Usage
To run the calculator with command-line arguments, use the following format:

./calculator <operation> <num1> <num2>

## Example

./calculator + 3 4
