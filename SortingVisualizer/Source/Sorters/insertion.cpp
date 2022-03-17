#include "sorters/insertion.h"

namespace sort_vis
{
    void Insertion::step()
    {
        if (done)
            return;

        // insertion sort uses 2 ptrs next to each other, so constrain the current index since the left ptr will be at 0 when current_index is at 1.
        if (current_index == 0)
            current_index = 1;

        int left_ptr = current_index - 1;
        int right_ptr = current_index;

        if (int_arr[right_ptr] < int_arr[left_ptr])
        {
            swap(left_ptr, right_ptr);
            current_index--;
        }
        else
        {
            current_index++;
        }

        if (current_index >= len)
        {
            done = true;
        }





        /*if (current_index == sort_end - 1)
        {
            if (sorted)
            {
                done = true;
                return;
            }
            current_index = 0;
            sorted = true;
            sort_end--;
        }

        int left_int = int_arr[current_index];
        int right_int = int_arr[current_index + 1];

        if (left_int > right_int)
        {
            int_arr[current_index] = right_int;
            int_arr[current_index + 1] = left_int;

            sorted = false;
        }

        current_index++;*/
    }

    Insertion::Insertion(int len) : Sorter(len)
    {
        //sort_end = len;

        reset();

        alg_name = "Insertion sort";
    }

    void Insertion::reset()
    {
        init_reset();

        //sort_end = len;
    }
}