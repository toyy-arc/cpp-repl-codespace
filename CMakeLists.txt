cmake_minimum_required(VERSION 3.15)
project(CppREPL)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(main src/main.cpp)

# Enable testing
enable_testing()
add_test(NAME ExampleTest COMMAND main)
