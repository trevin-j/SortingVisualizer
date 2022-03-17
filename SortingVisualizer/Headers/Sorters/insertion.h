#pragma once
#include "sorter.h"

namespace sort_vis
{
    class Insertion : public Sorter
    {
    public:
        // Public methods

        /// <summary>
        /// Take a step in the sorting algorithm.
        /// </summary>
        void step();

        Insertion(int len);

    public:
        // Public fields

    private:
        // Private methods



    private:
        // private fields

        void reset();
    };
}
