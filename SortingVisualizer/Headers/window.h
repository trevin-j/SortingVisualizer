#pragma once

// Includes
#include <SFML/Graphics.hpp>

#include "program.h"

// We are giving a different namespace to this Window and the Program class
// because they are intended to be as modular as possible, and as such they
// should be able to be used in more projects that use SFML.

// If I make my own library for this, it will likely be called t_graphics or something similar, so we will go with that namespace for now.
namespace t_graphics
{
    /// <summary>
    /// Overall, the Window class acts as a sort of wrapper for the SFML Window class, along with some extra logic for making the main loop and such easier.
    /// </summary>
    class Window
    {

        // private methods
    private:
        /// <summary>
        /// Deal with the events each frame.
        /// </summary>
        void handle_events();

        /// <summary>
        /// Draw each frame.
        /// </summary>
        void draw_frame();

        /// <summary>
        /// Update data etc.
        /// </summary>
        void update();


        // private fields
    private:
        /// <summary>
        /// Window for drawing.
        /// </summary>
        sf::RenderWindow window;

        int screen_width;
        int screen_height;
        
        // public methods
    public:

        /// <summary>
        /// Run the program in the window. The main loop is contained in this method.
        /// </summary>
        /// <returns></returns>
        int run();

        /// <summary>
        /// Create the window where the rendering will take place.
        /// </summary>
        void create_window(Program program);

        Window();
    };
}
