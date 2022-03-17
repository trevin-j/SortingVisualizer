#include "sorters/bogo.h"

namespace sort_vis
{
    void Bogo::step()
    {
        if (done)
            return;

        randomize_int_arr();

        if (validate_sorted())
            done = true;
    }

    Bogo::Bogo(int len) : Sorter(len)
    {
        reset();

        alg_name = "Bogo sort";
    }

    void Bogo::reset()
    {
        // Call to base class defined method, which takes care of most of the resetting.
        init_reset();
    }
}