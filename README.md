# Dynamic Library Project in C/C++
This project demonstrates the use of a dynamically linked library in C/C++ to perform common operations on integer arrays. Multiple programs can utilize this library, allowing code reuse and flexibility in dynamically loading functions at runtime.

# Project Overview
This project includes a shared library that is dynamically linked and loaded at runtime. The library provides a set of essential functions that can be used to manipulate and analyze integer arrays. These functions include:

# Functions
* void sort(int a, const int size)
Sorts an integer array a of given size in ascending order.

* void readInfo(int a, const int size)
Reads size integers into the array a.

* void display(int a, const int size)
Displays the contents of the integer array a to the console.

* double computeAvg(int a, const int size)
Computes and returns the average of elements in the integer array a.

# Dynamic Linking
The library functions are loaded at runtime using dynamic linking, enabling flexibility for applications that require real-time loading and unloading of library functions.

# Requirements
 * GCC or compatible C++ compiler
 * Linux environment (or compatible OS for shared libraries)
