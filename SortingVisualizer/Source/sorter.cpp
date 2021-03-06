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
        random_seed = std::chrono::system_clock::now().time_since_epoch().count();
    }

    void Sorter::init_reset()
    {
        current_index = 0;

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
        std::shuffle(int_arr, int_arr + len, std::default_random_engine(random_seed));
    }

    void Sorter::swap(int index1, int index2)
    {
        int val1 = int_arr[index1];
        int val2 = int_arr[index2];

        int_arr[index1] = val2;
        int_arr[index2] = val1;
    }

    bool Sorter::validate_sorted()
    {
        for (int i = 0; i < len - 1; i++)
        {
            if (int_arr[i] > int_arr[i + 1])
            {
                return false;
            }
        }
        return true;
    }
}