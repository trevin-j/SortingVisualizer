#include "sorters/comb.h"
#include <algorithm>
#include <random>
#include <chrono>

namespace sort_vis
{
    void Comb::step()
    {
        if (done)
            return;

        int left_ptr = current_index;
        int right_ptr = left_ptr + gap;

        if (right_ptr >= len)
        {
            if (sorted && gap == 1)
            {
                done = true;
                return;
            }
            current_index = 0;
            sorted = true;
            if (gap > 2)
                gap /= 1.3;
            else
                gap = 1;
            return;
        }
        
        if (int_arr[left_ptr] > int_arr[right_ptr])
        {
            swap(left_ptr, right_ptr);
            sorted = false;
        }

        current_index++;
    }

    Comb::Comb(int len) : Sorter(len)
    {
        reset();

        alg_name = "Comb sort";
    }

    void Comb::reset()
    {
        init_reset();

        gap = len;
    }
}