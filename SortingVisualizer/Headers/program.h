#pragma once

#include "window.h"

namespace sort_vis
{
    // Declare this so we stop getting errors when it tries to circle include or whatever the heck is going on
    class Window;

    /// <summary>
    /// Abstract class representing the programmable program.
    /// </summary>
    class Program
    {
    private:

    public:
        Program();

        /// <summary>
        /// This method is called once per frame. Any important program data should be updated here.
        /// </summary>
        virtual void update() = 0;

        /// <summary>
        /// Draw the frame. Do not worry about clearing screen first or flipping the buffer.
        /// </summary>
        virtual void draw_frame() = 0;

        /// <summary>
        /// Called by window when the program is passed to it. The window passes a reference to itself here, so that the Program can get useful info from the current window.
        /// </summary>
        /// <param name="window"></param>
        void set_window_reference(Window* window);


    public:
        // Since we don't create this object, we won't delete it either.
        Window* window;
    };
}
