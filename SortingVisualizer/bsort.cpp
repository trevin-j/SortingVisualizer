#include <iostream>

#include "bsort.h"

int* b_sort(int* ints, int len, bool copy)
{
    static int* new_ints;

    // If a the sorted list will be a copy, then copy the array to new location on heap.
    // Else give the new pointer the location of the original array.
    if (copy)
    {
        new_ints = copy_int_arr(ints, len);
    } 
    else
    {
        new_ints = ints;
    }


    // Bubble sort
    bool not_sorted = true;
    while (not_sorted)
    {
        not_sorted = false;
        for (int i = 0; i < len - 1; i++)
        {
            if (new_ints[i] > new_ints[i + 1])
            {
                not_sorted = true;
                int left_int = new_ints[i];
                int right_int = new_ints[i + 1];
                new_ints[i] = right_int;
                new_ints[i + 1] = left_int;
            }
        }
    }

    // We don't want to create too many pointers to the same address to prevent being able to keep track of those pointers, so return nullptr if the user is modifying the original.
    if (!copy)
    {
        return nullptr;
    }

    return new_ints;
}

int* copy_int_arr(int* arr, int len)
{
    static int* new_arr = new int[len];

    for (int i = 0; i < len; i++)
    {
        new_arr[i] = arr[i];
    }

    return new_arr;
}