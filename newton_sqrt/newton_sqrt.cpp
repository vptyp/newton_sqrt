//
// Created by vptyp on 2/2/2024.
//

#include <limits>

#include "newton_sqrt.h"


namespace newton {

float sqrt(float val)
{
    constexpr int samples = 100;

    if(val < 0) return std::numeric_limits<double>::quiet_NaN();
    if(val == 0 || val == 1) return val;

    double result = 1;
    for (int i = 1; i <= samples; ++i) {
        result = 0.5 * (result + val / result);
    }

    return static_cast<float>(result);
}

}

