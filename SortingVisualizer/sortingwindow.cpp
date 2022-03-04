// SFML header files
#include <SFML/Graphics.hpp>

// Project header files
#include "bsort.h"

// Associated header file
#include "sortingwindow.h"



namespace sort_vis
{
    void SortingWindow::create_window()
    {
        // create the window
        window.create(sf::VideoMode(800, 600), "My window");

    }

    int SortingWindow::run()
    {
        // run the program as long as the window is open
        while (window.isOpen())
        {
            handle_events();
            draw_frame();
        }
        
        return 0;
    }

    void SortingWindow::handle_events()
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    void SortingWindow::draw_frame()
    {
        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }
}