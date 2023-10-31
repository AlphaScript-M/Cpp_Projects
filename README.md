# Cpp_Projects

# Simple Calculator C++ Program

This C++ program is a simple calculator that performs basic arithmetic operations on two numbers based on the operator chosen by the user. The code is well-documented, and this README provides an overview of the program's functionality, usage, and structure.

## Features

- Performs addition, subtraction, multiplication, division, and modulus operations.
- Handles division by zero gracefully and provides an error message.
- Prompts the user for input, including the first number, operator, and the second number.
- Uses a switch-case statement to determine the operation to be performed.
- Provides feedback to the user based on the chosen operator.

## How to Use

1. Compile the code using a C++ compiler (e.g., g++):

   ```
   g++ calculator.cpp -o calculator
   ```

2. Run the compiled program:

   ```
   ./calculator
   ```

3. Follow the on-screen prompts to enter the first number, operator (+, -, *, /, %), and the second number.

4. The program will perform the specified operation and display the result or an error message if division by zero occurs.

## Code Structure

- The program starts with the `main` function.
- It declares variables to store the first number, operator, and the second number.
- It uses `cout` and `cin` to prompt the user for input.
- The `switch` statement checks the operator and performs the corresponding operation.
- It handles division by zero with an `if` condition.
- Provides feedback to the user based on the chosen operator or an error message for invalid operators.

## Examples

- Entering `10`, `+`, and `5` will output `15`.
- Entering `8`, `/`, and `0` will output `ERROR!! Division by zero.`.

## Contributing

Feel free to contribute to this project by adding more features, improving the code, or fixing any issues. Pull requests are welcome.

## License

---
