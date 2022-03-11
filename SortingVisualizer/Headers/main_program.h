#pragma once
#include "program.h"

namespace t_graphics
{
    /// <summary>
    /// MainProgram is a subclass of Program, which is user defined.
    /// </summary>
    class MainProgram : public Program
    {
        /// <summary>
        /// The update method is called every frame and MUST be implemented.
        /// </summary>
        void update();
    };
}
