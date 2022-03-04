#pragma once

// SFML header files
#include <SFML/Graphics.hpp>

namespace sort_vis
{
    class SortingWindow
    {
        // public methods
    public:
        int run();
        void create_window();

        // private methods
    private:
        void handle_events();
        void draw_frame();

        // private members
    private:
        sf::RenderWindow window;
    };
}
