#pragma once

// Includes
#include <SFML/Graphics.hpp>

#include "program.h"

namespace sort_vis
{
    // Declare this so we stop getting errors when it tries to circle include or whatever the heck is going on
    class Program;

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
        Program* const program;

        int screen_width;
        int screen_height;

        
        // public methods
    public:

        /// <summary>
        /// Run the program in the window. The main loop is contained in this method.
        /// </summary>
        /// <returns>0 if everything went well, else some other number. If this window is the main window, the return value here will be the return value of the main function.</returns>
        int run();

        Window(int screen_width, int screen_height, Program* const program);

        // Encapsulation is important here because if we want to modify the screen dimensions, it'll need to modify them in the sf::Window as well.
        int get_screen_width() const;
        int get_screen_height() const;

    public:
        /// <summary>
        /// Window for drawing.
        /// </summary>
        sf::RenderWindow window;
    };
}
