//// SFML header files
//#include <SFML/Graphics.hpp>
//
//// Project header files
////#include "bsort.h"
//#include "sorter.h"
//
//// Associated header file
//#include "sortingwindow.h"
//
//// Debugging
//#include <iostream>
//
//
//
//namespace sort_vis
//{
//    void SortingWindow::create_window()
//    {
//        // create the window
//        window.create(sf::VideoMode(screen_width, screen_height), "My window");
//
//    }
//
//
//    // infinite loop while app runs
//    int SortingWindow::run()
//    {
//        // 
//        //sorter = new Sorter(100);
//
//        // run the program as long as the window is open
//        while (window.isOpen())
//        {
//            handle_events();
//            update();
//            draw_frame();
//        }
//        
//        return 0;
//    }
//
//
//    // Deal with events
//    void SortingWindow::handle_events()
//    {
//        // check all the window's events that were triggered since the last iteration of the loop
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            // "close requested" event: we close the window
//            if (event.type == sf::Event::Closed)
//                window.close();
//
//            if (event.type == sf::Event::KeyPressed)
//            {
//                if (event.key.code == sf::Keyboard::Space)
//                {
//                    do_step = true;
//                    //std::cout << "SPACE PRESSED" << std::endl;
//                }
//            }
//        }
//    }
//
//
//    // Draw stuff
//    void SortingWindow::draw_frame()
//    {
//        // clear the window with black color
//        window.clear(sf::Color::Black);
//
//        // draw everything here...
//        // window.draw(...);
//        draw_bars();
//
//        // end the current frame
//        window.display();
//    }
//
//
//    // Draw the bars
//    void SortingWindow::draw_bars()
//    {
//        float bar_width = (float) screen_width / sorter.len;
//
//        for (int i = 0; i < sorter.len; i++)
//        {
//            //std::cout << i << std::endl;
//            int left = bar_width * i;
//            //int height = screen_height * (sorter.int_arr[i] / sorter.len);
//            int height = sorter.int_arr[i] * (screen_height / sorter.len);
//
//            unsigned char r = 255;
//            unsigned char g = 255;
//            unsigned char b = 255;
//            
//            if (sorter.current_index == i)
//            {
//                g = 0;
//                b = 0;
//            }
//
//            draw_bar(left, bar_width + 1, height, r, g, b);
//        }
//    }
//
//
//    // Draw a bar
//    void SortingWindow::draw_bar(int left, int width, int height, int r, int g, int b)
//    {
//        //if (width < 1)
//        //    width = 1;
//        sf::RectangleShape rect(sf::Vector2f(width, height));   // NOTE: This is a Vector2f meaning uses floats, not ints. This may need revision later.
//        rect.setFillColor(sf::Color(r, g, b));
//        rect.setPosition(sf::Vector2f(left, screen_height - height));
//        window.draw(rect);
//    }
//
//
//    // Update data and whatnot
//    void SortingWindow::update()
//    {
//        do_step = true;
//        if (do_step)
//        {
//            for (int i = 0; i < steps_per_frame; i++)
//                sorter.step();
//
//            //std::cout << "DOING STEP" << std::endl;
//            do_step = false;
//        }
//
//        if (sorter.done)
//        {
//            sorter.reset();
//        }
//    }
//
//
//    // Constructor
//    SortingWindow::SortingWindow() : sorter(500)
//    {
//        screen_height = 600;
//        screen_width = 800;
//        do_step = false;
//        steps_per_frame = 500;
//    }
//}