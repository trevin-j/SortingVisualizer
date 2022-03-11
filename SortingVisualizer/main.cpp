//#include <SFML/Graphics.hpp>

//#include <iostream>

//#include "bsort.h"
#include "sortingwindow.h"

// t_graphics
#include "window.h"

// defined subclass of the t_graphics::Program class
#include "main_program.h"

//
//int main()
//{
//    SortingWindow sorting_window;
//
//    sorting_window.create_window();
//
//    return sorting_window.run();
//}


int main()
{
    t_graphics::MainProgram main_program();
    t_graphics::Window main_window();
    main_window.create_window(main_program);

    main_window.run();
}


//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}




//void print_int_array(int* ints, int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        std::cout << ints[i] << ',';
//    }
//    std::cout << std::endl;
//}
//// Testing my bubble sort function
//int main()
//{
//    // Create and print unsorted array
//    //int* unsorted_ints = new int[10] { 0,5,6,3,0,8,4,2,9,1 };
//    int unsorted_ints[10] = { 0,5,6,3,0,8,4,2,9,1 };
//    print_int_array(unsorted_ints, 10);
//
//    // Sort array into new array, and print it
//    int* sorted_ints = b_sort(unsorted_ints, 10, true);
//    print_int_array(sorted_ints, 10);
//
//    // Verify that the sort function didn't change the original array
//    print_int_array(unsorted_ints, 10);
//
//    // Sort original array
//    b_sort(unsorted_ints, 10, false);
//    // Verify that original array got sorted
//    print_int_array(unsorted_ints, 10);
//
//    return 0;
//}