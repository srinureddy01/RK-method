

# Runge-Kutta Method - Single File C Implementation

## Overview

This project contains a simple implementation of the Runge-Kutta (RK4) method for solving ordinary differential equations (ODEs) in a single C source file.

The entire program is contained in `finel.c` and demonstrates how to numerically solve an ODE using the RK4 technique with user-defined functions and initial conditions.

## Building the Program

To compile the program, ensure you have a C compiler such as `clang` or `gcc` installed.

Run the following command in your terminal:

bash
clang -o rk_solver finel.c -lm
Or using gcc:
gcc -o rk_solver finel.c -lm
After compilation, execute the program with:
./final.c
