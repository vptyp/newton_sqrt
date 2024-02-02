#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
#include <newton_sqrt.h>

int main() {
    std::vector<float> test_values{0.0f, 1.0f, 2.0f,
                                      3.0f, 4.0f, std::numeric_limits<float>::max(),
                                      std::numeric_limits<float>::min(), 0.5f, 0.25f, -1};
    bool passed = true;
    constexpr float epsilon = 0.0001;
    for (auto val : test_values) {
        float taylor_sqrt = newton::sqrt(val);
        float std_sqrt = std::sqrt(val);
        if (std::abs(taylor_sqrt - std_sqrt) > epsilon) {
            std::cout << "Test failed for value: " << val << std::endl;
            std::cout << "Taylor sqrt: " << taylor_sqrt << std::endl;
            std::cout << "Standard sqrt: " << std_sqrt << std::endl;
            passed = false;
        }
    }

    if(passed) {
        std::cout << "All ok!" << std::endl;
    } else {
        std::cout << "FAILED!" << std::endl;
    }

    return 0;
}
