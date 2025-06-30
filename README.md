# Robust Command-Line Calculator

---

## Project Overview
This project is a console-based calculator application developed in C++. It's designed to perform a range of mathematical operations while providing a user-friendly experience through comprehensive input validation and error handling. This focus on robustness makes the calculator reliable even with varied user inputs, NOTE: this project is a paractical form of learning the basics/fundamentals of programming with C++ and been developed for almost 2~4 days due to solving bugs and errors without relying compeltely on AI bots or LLMs.

---

## Features
* **Basic Arithmetic:** Supports addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`).
* **Exponentiation:** Calculates powers (`^`) with an integer exponent.
* **Factorial:** Computes the factorial (`!`) for non-negative integers.
* **Comprehensive Input Validation:**
    * Checks for and gracefully handles invalid non-numeric input.
    * Ensures operators are valid choices from the supported list.
    * Prevents division by zero.
    * Validates specific input types required by functions (e.g., integer exponents, non-negative integers for factorial).
* **Continuous Operation:** Allows users to perform multiple calculations sequentially until they choose to exit.
* **Clear User Prompts:** Guides the user through each step of the calculation process.

---

## How to Compile and Run
Follow these steps to get the calculator running on your local machine:

### Prerequisites
* A C++ compiler (**g++**, Clang).

### Compilation
1.  Open your terminal or command prompt.
2.  Navigate to the directory where you saved `Robust_command-line_calculator.cpp`.
3.  Compile the source code using a command like:

    `g++ Robust_command-line_calculator.cpp -o calculator`

    (This command creates an executable file named `calculator`).
    Note: If you're a windows user then you have to add the extension `.exe` for your excutable file.

### Execution
1.  Run the compiled executable from your terminal:

    `./calculator`

    (On Windows, you might simply type `calculator.exe` or `calculator` and press Enter).

---

## Usage
Once the program starts, you'll be guided by prompts:
1.  **Start/Exit:** The program will first ask if you want to perform a calculation. Type `y` (or `Y`) to proceed, or `n` (or `N`) to exit.
2.  **First Number:** Enter your first operand.
3.  **Operator Selection:** Choose an operator from `+`, `-`, `*`, `/`, `!`, or `^`.
4.  **Second Number (Conditional):** If you selected a binary operator (`+`, `-`, `*`, `/`, `^`), you'll be prompted for a second number. For factorial (`!`), no second number is needed.
5.  **Result:** The calculated result will be displayed.
6.  The program then loops back, asking if you wish to perform another calculation.

---

## Technologies Used
* **C++:** The core programming language for the application.
* **Standard C++ Libraries:**
    * `<iostream>` for input/output.
    * `<limits>` for `std::numeric_limits` (used in input buffer management).
    * `<string>` (included for general utility, though not directly used in core logic).
    * `<cmath>` (included, but custom functions were implemented to demonstrate understanding).

---

## Key Learnings & Problem-Solving Insights:
This project served as an invaluable opportunity to deepen my understanding of C++ fundamentals and practical software development challenges. I gained significant experience in:

* **Mastering Input Streams:** Navigating the complexities of `std::cin`, including implementing robust error handling with `std::cin.fail()`, clearing error states with `std::cin.clear()`, and efficiently managing the input buffer using `std::cin.ignore()` to prevent unexpected program behavior.
* **Designing and Implementing Custom Functions:** Building modular and reusable code by creating dedicated functions for `factorial` and `power` calculations, enhancing code readability and maintainability.
* **Advanced Control Flow:** Skillfully applying nested `while` loops, `if/else if/else` chains, and `switch` statements to manage intricate program logic, especially around conditional input gathering and operation execution.
* **Type Management and Casting:** Understanding the importance of distinct data types (`double` vs. `int`) and correctly applying `static_cast` for explicit type conversions when passing arguments to functions expecting specific types (e.g., integer exponents for power, integer factorial inputs).
* **Defensive Programming:** Proactively anticipating and addressing potential issues such as division by zero, invalid numerical input, and inappropriate data types for specific mathematical operations, leading to a more resilient application.
* **Effective Debugging:** Employing systematic debugging techniques, including strategic use of `cout` statements, to trace program execution and variable states. This was particularly helpful in diagnosing subtle logical flow errors and structural issues related to code blocks and brace matching, which were not always obvious from compiler errors alone.

---

## Author
[Yusif Hamdy]
[github.com/xz52]
