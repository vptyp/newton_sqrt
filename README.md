# Square Root Calculator by Newton's method 

## Overview

This project aims to implement a C++ program to calculate the square root of a number using Newton's method. Additionally, the project is configured to run tests using CTest. The entire project can be built and executed within a Docker container. Changing of the method causing by limited calculate range of Taylor's series (x<1 for 1+x). Newton_sqrt building as shared library.

## Files and Directory Structure

- **CMakeLists.txt**: CMake configuration file for the project.
- **newton_sqrt/**: Contains the source code for the square root calculator.
  - `newton_sqrt.cpp` and `newton_sqrt.h`: Implementation and header files for the square root calculation.
- **main.cpp**: implements program to run performance test
- **Dockerfile**: Docker configuration file to build and run the project.

## Building and Running the Project

### Prerequisites

- Docker installed on your machine.

### Build and Run Instructions

1. Clone the project repository:

    ```bash
    git clone https://github.com/vptyp/newton_sqrt.git
    ```

2. Navigate to the project directory:

    ```bash
    cd newton_sqrt
    ```

3. Build the Docker image:

    ```bash
    docker build -t sqrt_calculator .
    ```

4. Run the Docker container:

    ```bash
    docker run sqrt_calculator
    ```

## Testing

The `ctest` command is automatically executed as the default command when running the Docker container.
