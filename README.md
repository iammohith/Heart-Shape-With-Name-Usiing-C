# Heart Shape with Name using C

## Overview

This repository contains a C program that prints a personalized name inside a heart shape using ASCII art. The heart shape is generated using asterisks (`*`), and the name is displayed at the center of the heart. The size of the heart can be adjusted by the user, allowing for dynamic shapes.

## How It Works

The program uses nested loops to create the heart shape, printing asterisks (`*`) for the outer edges of the heart. The user's name is printed in the center of the heart. You can customize the size of the heart by entering a value for `n` (the size parameter) during execution.

### Program Flow:
1. **Input**: 
   - The program prompts the user to enter a name.
   - The program then prompts the user to enter a value for `n`, which controls the size of the heart.

2. **Output**:
   - A heart shape with the user's name displayed in the middle.

## Example

For the input:
```bash
Enter your name: Mohith
Enter value of n: 6
```

The output will be:
```
 ***   ***
***** *****
***Mohith**
 *********
  *******
   *****
    ***
     *
```

## Prerequisites

- **C Compiler**: To compile and run the C program, you'll need a C compiler (e.g., GCC).
- **Basic Knowledge of C**: Understanding basic loops and conditionals will help in modifying or understanding the code further.

## Getting Started

1. **Clone the repository**:
   ```bash
   git clone https://github.com/iammohith/Heart-Shape-With-Name-Using-C.git
   ```

2. **Navigate to the project directory**:
   ```bash
   cd Heart-Shape-With-Name-Using-C
   ```

3. **Compile the program**:
   ```bash
   gcc heart_shape.c -o heart_shape
   ```

4. **Run the program**:
   ```bash
   ./heart_shape
   ```

5. **Follow the prompts** to enter your name and the size of the heart.

## Acknowledgements

- Inspiration from various ASCII art generators.
- Standard C libraries for string manipulation and input/output functions.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
