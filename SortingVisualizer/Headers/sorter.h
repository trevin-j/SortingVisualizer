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
        virtual void step() = 0;

        Sorter(int len);

        virtual void reset() = 0;

    public:
        // Public fields

        /// <summary>
        /// The index that the sorter is currently looking at
        /// </summary>
        int current_index;

        /// <summary>
        /// The array of integers that will be sorted
        /// </summary>
        int* int_arr;

        /// <summary>
        /// The length of the arra.
        /// </summary>
        int len;

        /// <summary>
        /// Bool representing if the array has been completely finished sorting
        /// </summary>
        bool done = false;

        std::string alg_name;

    private:
        // Private methods

        /// <summary>
        /// Randomize the values in the int_arr array
        /// </summary>
        void randomize_int_arr();

        /// <summary>
        /// Implemented in subclass if necessary. Basically add any additional reset stuff. This is also called when the algorithm is initialized.
        /// </summary>

    private:
        // private fields


    protected:
        /// <summary>
        /// Whether what it has checked so far this iteration is sorted.
        /// </summary>
        bool sorted = false;

        void init_reset();

    };
}

