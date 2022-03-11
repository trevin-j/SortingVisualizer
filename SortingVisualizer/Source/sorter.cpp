#include "sorter.h"
#include <algorithm>
#include <random>
#include <chrono>

namespace sort_vis
{
    void Sorter::step()
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

    Sorter::Sorter(int len)
    {
        // Initialize variables
        this->len = len;
        sort_end = len;
        int_arr = new int[len];
        current_index = 0;

        reset();
    }

    void Sorter::reset()
    {
        done = false;
        sort_end = len;

        // For each int in array, set it to the index + 1
        for (int i = 0; i < len; i++)
        {
            int_arr[i] = i + 1;
        }

        randomize_int_arr();
    }

    void Sorter::randomize_int_arr()
    {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

        std::shuffle(int_arr, int_arr + len, std::default_random_engine(seed));
    }
}