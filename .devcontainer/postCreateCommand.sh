#!/bin/bash
set -e

echo "Setting up C++ development environment..."

# Create build directory
mkdir -p build
cd build

# Configure CMake
cmake ..

echo ""
echo "✅ C++ environment ready!"
echo ""
echo "Available commands:"
echo "  • cmake --build build     - Compile the project"
echo "  • ./build/main            - Run compiled binary"
echo "  • F5                       - Start debugging with GDB"
echo "  • Ctrl+Shift+B            - Quick build tasks"
echo ""
echo "💡 Tips:"
echo "  • Type C++ code and press Ctrl+Space for autocomplete"
echo "  • Hover over symbols for documentation"
echo "  • Modify CMakeLists.txt to add more source files"
echo ""
