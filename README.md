# Overview

This program is designed to visualize different sorting algorithms using the length of vertical bars to represent numbers in an array. My purpose for creating this application was to learn how to use C++ to create a full-featured application. I also learned how to use many OOP techniques with C++. Most noteably in my program, I used polymorphism to make it really easy to add new sorting algorithms to the program.

The software is not all that interactive, it just visualizes different sorting algorithms. The neat thing about the program, though, is that you can implement your own sorting algorithms with relative ease by creating a subclass of the Sorter class, and implementing the step() method.

[Software Demo Video](https://youtu.be/j0_LjtEMtOA)

# Development Environment

The program was developed using Visual Studio 2022 (preview), using the Visual Studio compiler for C++ 20, though, I didn't use anything that was specific to that C++ version, so the same code should work with previous versions of C++.

I used the SFML library for graphics. You will need to manually install SFML on your computer, and then set up the project to include the necessary files for SFML. You can find how to do this on the [SFML website.](https://www.sfml-dev.org/tutorials/2.5/)

# Useful Websites

* [C++ reference](https://www.cplusplus.com/reference/)
* [Getting started with SFML](https://www.sfml-dev.org/tutorials/2.5/)

# Future Work

* Make adding custom algorithm to the list of algorithms easier.
* Add support for audio representation of sorting.
* Clean up unnecessary dependencies.