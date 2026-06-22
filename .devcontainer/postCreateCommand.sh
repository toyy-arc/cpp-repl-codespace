#!/bin/bash
set -e

echo "Setting up C++ REPL environment..."

# Create build directory
mkdir -p build
cd build

# Configure CMake
cmake ..

echo "C++ environment ready!"
echo "Available commands:"
echo "  - cling (C++ interactive REPL)"
echo "  - cmake --build . (compile project)"
echo "  - ./main (run compiled binary)"
