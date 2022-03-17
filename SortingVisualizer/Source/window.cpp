#include "window.h"

namespace sort_vis
{
    void Window::handle_events()
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }

    void Window::draw_frame()
    {
        window.clear(sf::Color::Black);
        program->draw_frame();
        window.display();
    }

    void Window::update()
    {
        program->update();
    }

    int Window::run()
    {
        while (window.isOpen())
        {
            handle_events();
            update();
            draw_frame();
        }

        return 0;
    }

    Window::Window(int screen_width, int screen_height, Program* const program) : program(program)
    {
        this->screen_width = screen_width;
        this->screen_height = screen_height;

        window.create(sf::VideoMode(screen_width, screen_height), "Sorting Visualizer");

        // Give the program a reference to this window.
        program->set_window_reference(this);
    }

    int Window::get_screen_height() const
    {
        return screen_height;
    }

    int Window::get_screen_width() const
    {
        return screen_width;
    }
}