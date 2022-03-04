#pragma once

/// <summary>
/// Uses bubble sort algorithm to sort an array of ints.
/// </summary>
/// <param name="ints">An array of ints. Works with heap or stack-allocated int arrays.</param>
/// <param name="len">The length of the int array.</param>
/// <param name="copy">If true, returns a copy of the array and does not modify the original. Else, modifies the original int array.</param>
/// <returns>If copy is true, returns a sorted copy of the int array. If copy is false, returns nullptr to prevent exessive pointers to original array.</returns>
int* b_sort(int* ints, int len, bool copy=false);

int* copy_int_arr(int* arr, int len);