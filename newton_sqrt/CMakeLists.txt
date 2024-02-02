cmake_minimum_required(VERSION 3.2)
project(newton_sqrt_lib)

add_library(newton_sqrt_lib SHARED
        newton_sqrt.cpp
        newton_sqrt.h
)

set_target_properties(newton_sqrt_lib PROPERTIES
        PUBLIC_HEADER newton_sqrt.h)
