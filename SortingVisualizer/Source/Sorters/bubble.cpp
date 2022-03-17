#include "Sorters/bubble.h"
#include <algorithm>
#include <random>
#include <chrono>

namespace sort_vis
{
    void Bubble::step()
    {
        if (current_index == sort_end - 1)
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

        current_index++;
    }

    Bubble::Bubble(int len) : Sorter(len)
    {
        sort_end = len;

        reset();

        alg_name = "Bubble sort (optimized)";
    }

    void Bubble::reset()
    {
        init_reset();

        sort_end = len;
    }
}