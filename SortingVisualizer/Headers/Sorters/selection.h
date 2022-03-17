#pragma once
#include "sorter.h"

namespace sort_vis
{
    class Selection : public Sorter
    {
    public:
        // Public methods

        /// <summary>
        /// Take a step in the sorting algorithm.
        /// </summary>
        void step();

        Selection(int len);

    private:
        // Private methods

        void reset();

    private:
        // Insertion sort needs to remember a couple more ptrs than just the current index
        // Left ptr is what will get swapped with a lower number
        int left_ptr;
        // Low is the lowest that the algorithm finds in the non-sorted part of the array
        int low;
    };
}
