#pragma once
#include "program.h"

#include "sorter.h"

namespace sort_vis
{
    /// <summary>
    /// MainProgram is a subclass of Program, which is user defined.
    /// </summary>
    class MainProgram : public Program
    {
    public:
        /// <summary>
        /// The update method is called every frame and MUST be implemented.
        /// </summary>
        void update();

        MainProgram();

        /// <summary>
        /// Draw the stuff to the screen. In this function, you should not worry about clearing buffer or flipping buffer. Just draw stuff as this is called once per frame.
        /// </summary>
        void draw_frame();

    private:
        void draw_bars();

        void draw_bar(int left, int width, int height, int r, int g, int b);

        void next_alg();


    private:
        /// <summary>
        /// Pointer to array of different sorters. These sorters are each a different implementation of the sorter class.
        /// The variable is a Sorter pointer pointer because it points to an array which contains a bunch of pointers to specific sorters.
        /// </summary>
        Sorter** sorter_list;
        const int num_sorters;
        Sorter* current_sorter;
        int current_sorter_index;

        sf::Clock clock;

        int steps_per_sec;

        sf::Clock between_algorithms;
        float secs_bet_algs;
        bool was_done;
    };
}
