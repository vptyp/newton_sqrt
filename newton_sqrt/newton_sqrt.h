//
// Created by vptyp on 2/2/2024.
//

#ifndef NEWTON_SQRT_H
#define NEWTON_SQRT_H

/*
Sqrt(x)
Given a non-negative floaf x, return the square root of x. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


Example 1:

Input: x = 4.0
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2.82842

*/

namespace newton {
    /**
     * Function to calculate the square root of a number using the Newton's method
     * @param val number to calculate the square root of
     * @return double square root of val
     */
    float sqrt(float val);

}
#endif //NEWTON_SQRT_H
