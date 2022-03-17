#pragma once
#include "sorter.h"

namespace sort_vis
{
    class Bogo : public Sorter
    {
    public:
        // Public methods

        /// <summary>
        /// Take a step in the sorting algorithm.
        /// </summary>
        void step();

        Bogo(int len);

    private:
        // Private methods

        void reset();
    };
}
