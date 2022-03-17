#include "main_program.h"

#include <iostream>

#include "sorters.h"
// Current sorters available:
// Algorithm     |  class name
// ------------------------------
// Bubble sort   |  Bubble
// Insertion sort|  Insertion
// Selection sort|  Selection
// Comb sort     |  Comb
// Bogo sort     |  Bogo

namespace sort_vis
{
    
    void MainProgram::update()
    {
        sf::Time elapsed = clock.restart();
        float delta_time_secs = elapsed.asSeconds();

        int num_steps = steps_per_sec * delta_time_secs;

        for (int i = 0; i < num_steps; i++)
        {
            current_sorter->step();
        }

        // Deal with switching algorithms and stuff
        if (!was_done && current_sorter->done)
        {
            was_done = true;
            between_algorithms.restart();
        }
        else if (was_done)
        {
            if (between_algorithms.getElapsedTime().asSeconds() > secs_bet_algs)
            {
                was_done = false;
                next_alg();
            }
        }

    }

    void MainProgram::next_alg()
    {
        current_sorter_index++;
        if (current_sorter_index >= num_sorters)
        {
            current_sorter_index = 0;
        }
        current_sorter = sorter_list[current_sorter_index];
        current_sorter->reset();

        update_text();
    }

    void MainProgram::update_text()
    {
        // select the font
        algorithm_name_display.setFont(font); // font is a sf::Font

        // set the string to display
        algorithm_name_display.setString(current_sorter->alg_name);

        // set the character size
        algorithm_name_display.setCharacterSize(24); // in pixels, not points!

        // set the color
        algorithm_name_display.setFillColor(sf::Color::White);

        // set the text style
        algorithm_name_display.setStyle(sf::Text::Bold);
    }


    // not the best way to keep track of things, but make sure to update num_sorters as more sorting algorithms are added. This is important so that we don't go out of our memory bounds.


    MainProgram::MainProgram() : num_sorters(5)
    {
        if (!font.loadFromFile("Assets/VCR_OSD_MONO.ttf"))
        {
            std::cout << "Failed to load font!" << std::endl;
        }


        clock.restart();
        steps_per_sec = 2000;

        was_done = false;
        secs_bet_algs = 2;

        current_sorter_index = 0;

        const int array_len = 200;

        

        sorter_list = new Sorter*[num_sorters];
        sorter_list[0] = new Bubble(array_len);
        sorter_list[1] = new Insertion(array_len);
        sorter_list[2] = new Selection(array_len);
        sorter_list[3] = new Comb(500);
        sorter_list[4] = new Bogo(100);

        current_sorter = sorter_list[current_sorter_index];

        update_text();
    }

    void MainProgram::draw_frame()
    {
        draw_bars();
        window->window.draw(algorithm_name_display);
    }

    // Draw the bars
    void MainProgram::draw_bars()
    {
        // Probably best to call this every frame in case dimensions get modified.
        int screen_width = window->get_screen_width();
        int screen_height = window->get_screen_height();

        float bar_width = (float)screen_width / current_sorter->len;

        for (int i = 0; i < current_sorter->len; i++)
        {
            //std::cout << i << std::endl;
            int left = bar_width * i;
            //int height = screen_height * (sorter.int_arr[i] / sorter.len);
            int height = current_sorter->int_arr[i] * (screen_height / current_sorter->len);

            unsigned char r = 255;
            unsigned char g = 255;
            unsigned char b = 255;

            if (current_sorter->current_index == i)
            {
                g = 0;
                b = 0;
            }

            draw_bar(left, bar_width + 1, height, r, g, b);
        }
    }


    // Draw a bar
    void MainProgram::draw_bar(int left, int width, int height, int r, int g, int b)
    {
        int screen_width = window->get_screen_width();
        int screen_height = window->get_screen_height();

        //if (width < 1)
        //    width = 1;
        sf::RectangleShape rect(sf::Vector2f(width, height));   // NOTE: This is a Vector2f meaning uses floats, not ints. This may need revision later.
        rect.setFillColor(sf::Color(r, g, b));
        rect.setPosition(sf::Vector2f(left, screen_height - height));
        window->window.draw(rect);
    }
}
