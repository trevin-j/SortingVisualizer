#pragma once

namespace sort_vis
{
    class Sorter
    {
    public:
        // Public methods
        
        /// <summary>
        /// Take a step in the sorting algorithm.
        /// </summary>
        void step();

        Sorter(int len);

        void reset();


    public:
        // Public fields
        int current_index;
        int* int_arr;
        int len;
        bool sorted = false;
        bool done = false;
        int sort_end;

    private:
        // Private methods

        /// <summary>
        /// Randomize the values in the int_arr array
        /// </summary>
        void randomize_int_arr();

    private:
        // private fields

    };
}
