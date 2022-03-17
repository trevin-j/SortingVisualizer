//#pragma once
//
//#include "sorter.h"
//
//// SFML header files
//#include <SFML/Graphics.hpp>
//
//namespace sort_vis
//{
//    class SortingWindow
//    {
//        // public methods
//    public:
//
//        /// <summary>
//        /// Run the program in the window. The main loop is contained in this method.
//        /// </summary>
//        /// <returns></returns>
//        int run();
//
//        /// <summary>
//        /// Create the window where the rendering will take place.
//        /// </summary>
//        void create_window();
//
//        SortingWindow();
//
//        // private methods
//    private:
//        /// <summary>
//        /// Deal with the events each frame.
//        /// </summary>
//        void handle_events();
//
//        /// <summary>
//        /// Draw each frame.
//        /// </summary>
//        void draw_frame();
//
//        /// <summary>
//        /// Draw the bars to represent the numbesr.
//        /// </summary>
//        void draw_bars();
//
//        void draw_bar(int left, int width, int height, int r, int g, int b);
//
//        /// <summary>
//        /// Update data etc.
//        /// </summary>
//        void update();
//
//        // private members
//    private:
//        /// <summary>
//        /// Window for drawing.
//        /// </summary>
//        sf::RenderWindow window;
//
//        Sorter sorter;
//
//        int screen_width;
//        int screen_height;
//
//        bool do_step;
//
//        int steps_per_frame;
//    };
//}
