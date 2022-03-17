#include "sorters/selection.h"

namespace sort_vis
{
    void Selection::step()
    {
        if (done)
            return;

        if (current_index <= left_ptr)
        {
            current_index = left_ptr + 1;
        }


        if (int_arr[current_index] < int_arr[low])
        {
            low = current_index;
        }

        current_index++;

        if (current_index >= len)
        {
            swap(left_ptr, low);
            left_ptr++;
            low = left_ptr;
            current_index = left_ptr + 1;
        }

        if (left_ptr == len)
            done = true;


        //if (done)
        //    return;

        //// insertion sort uses 2 ptrs next to each other, so constrain the current index since the left ptr will be at 0 when current_index is at 1.
        //if (current_index == 0)
        //    current_index = 1;

        //int left_ptr = current_index - 1;
        //int right_ptr = current_index;

        //if (int_arr[right_ptr] < int_arr[left_ptr])
        //{
        //    swap(left_ptr, right_ptr);
        //    current_index--;
        //}
        //else
        //{
        //    current_index++;
        //}

        //if (current_index >= len)
        //{
        //    done = true;
        //}

    }

    Selection::Selection(int len) : Sorter(len)
    {
        reset();

        alg_name = "Selection sort";
    }

    void Selection::reset()
    {
        // Call to base class defined method, which takes care of most of the resetting.
        init_reset();

        left_ptr = 0;
        low = 0;
    }
}