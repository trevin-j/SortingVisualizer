# Overview

This program is designed to visualize different sorting algorithms using the length of vertical bars to represent numbers in an array. My purpose for creating this application was to learn how to use C++ to create a full-featured application. I also learned how to use many OOP techniques with C++. Most noteably in my program, I used polymorphism to make it really easy to add new sorting algorithms to the program.

The software is not all that interactive, it just visualizes different sorting algorithms. The neat thing about the program, though, is that you can implement your own sorting algorithms with relative ease by creating a subclass of the Sorter class, and implementing the step() method.

[Software Demo Video](http://youtube.link.goes.here)

# Development Environment

The program was developed using Visual Studio 2022 (preview), using the Visual Studio compiler for C++ 20, though, I didn't use anything that was specific to that C++ version, so the same code should work with previous versions of C++.

I used the SFML library for graphics. The entire SFML library is included in the project, though many features are not actually used, so one thing I will do when I get the chance is remove the extra features and un-include them in the solution. SFML's license is included in `dependencies\SFMLx64\SFML_license.md`. I made no modifications to the SFML library for this program.

If you use Visual Studio, the program should compile without problems without needing to do anything extra. All dependencies should be included in the repository.

# Useful Websites

{Make a list of websites that you found helpful in this project}
* [C++ reference](https://www.cplusplus.com/reference/)
* [Getting started with SFML](https://www.sfml-dev.org/tutorials/2.5/)

# Future Work

* Make adding custom algorithm to the list of algorithms easier.
* Add support for making a certain pitched sound for the bar that the sorter is currently looking at, based on the largeness of the integer.
* Clean up unnecessary dependencies.