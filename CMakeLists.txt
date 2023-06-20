
set(CMAKE_C_COMPILER C:/MinGW/bin/gcc.exe)
set(CMAKE_CXX_COMPILER C:/MinGW/bin/g++.exe)


cmake_minimum_required(VERSION 3.12)
project(NeuralNetwork)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 11)

# Add source files to the project
set(SOURCES
    src/main.cpp
)

# Add include directories
include_directories(include)

# Create the executable-+
add_executable(NeuralNetwork src/main.cpp)
