#include "window.h"
#include "main_program.h"

// VERY VERY IMPORTANT TODO:
// CLEAN UP AFTER YOURSELF!
// REMEMBER TO ADD DESTRUCTORS AND TAKE CARE OF POINTERS!

int main()
{
    sort_vis::MainProgram main_program;
    sort_vis::Window main_window(1000, 750, &main_program);

    return main_window.run();
}
