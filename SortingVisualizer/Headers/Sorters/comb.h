#pragma once

#include "sorter.h"

namespace sort_vis
{
    class Comb : public Sorter
    {
    public:
        // Public methods

        /// <summary>
        /// Take a step in the sorting algorithm.
        /// </summary>
        void step();

        Comb(int len);

    private:
        // Private methods

        void reset();

    private:
        // private fields

        /// <summary>
        /// The current last index of what is currently being sorted. Used to speed up bubble sort as it progresses.
        /// </summary>
        int gap = 0;

    };
}
