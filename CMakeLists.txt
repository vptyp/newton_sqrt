cmake_minimum_required(VERSION 3.2)
project(test_newton_sqrt)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_newton_sqrt main.cpp)
add_subdirectory(newton_sqrt)
target_link_libraries(test_newton_sqrt PRIVATE newton_sqrt_lib)
target_include_directories(test_newton_sqrt PRIVATE newton_sqrt)

enable_testing()
add_test(NAME numeric_limits_test COMMAND test_newton_sqrt)
set (passRegex "^Test passed" "^All ok")
set (failRegex "FAILED")

set_property (TEST numeric_limits_test
        PROPERTY PASS_REGULAR_EXPRESSION "${passRegex}")
set_property (TEST numeric_limits_test
        PROPERTY FAIL_REGULAR_EXPRESSION "${failRegex}")