# Use a base image with CMake and a C++ compiler
FROM gcc:latest

RUN apt-get update;
RUN apt-get install -y cmake;

# Set the working directory in the container
WORKDIR /app

# Copy the contents of the current directory to the container
COPY . .

# Run CMake to configure the project
RUN cmake .

# Build the project
RUN make

# Run ctest to execute tests
CMD ["ctest"]