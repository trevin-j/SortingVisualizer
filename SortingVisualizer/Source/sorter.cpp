#include "sorter.h"
#include <algorithm>
#include <random>
#include <chrono>

namespace sort_vis
{

    Sorter::Sorter(int len)
    {
        // Initialize variables
        this->len = len;
        int_arr = new int[len];
        current_index = 0;
        alg_name = "NULL";
    }

    void Sorter::init_reset()
    {
        done = false;
        sorted = false;

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