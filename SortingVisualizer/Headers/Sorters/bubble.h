#pragma once

#include "sorter.h"

namespace sort_vis
{
    class Bubble : public Sorter
    {
    public:
        // Public methods
        
        /// <summary>
        /// Take a step in the sorting algorithm.
        /// </summary>
        void step();

        Bubble(int len);

    public:
        // Public fields

    private:
        // Private methods

        

    private:
        // private fields
        
        /// <summary>
        /// The current last index of what is currently being sorted. Used to speed up bubble sort as it progresses.
        /// </summary>
        int sort_end;

        void reset();
    };
}
