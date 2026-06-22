# C++ Codespaces Template

A ready-to-use GitHub Codespaces template for **professional C++ development** with:
- ✅ **Autocomplete & IntelliSense** via MS C++ Tools
- ✅ **CMake** build system
- ✅ **Debugging** support (gdb/lldb)
- ✅ **Code formatting** (clang-format)
- ✅ **Static analysis** (clang-tidy)

## Quick Start

### 1. Open in Codespaces
Click **"Code"** → **"Codespaces"** → **"Create codespace on main"**

### 2. Build & Run
```bash
cmake --build build
./build/main
```

Or use VS Code tasks:
- **Ctrl+Shift+B** → Select **"C++: build"** or **"C++: run"**

### 3. Debug
Press **F5** to start debugging with GDB (breakpoints, stepping, variable inspection)

## Features

### 🧠 IntelliSense & Autocomplete
- Full C++ STL suggestions
- Type any STL class/function and press `Ctrl+Space`
- Hover over symbols for documentation

### 🔨 Build System
- CMake pre-configured
- Easy to add source files - just modify `CMakeLists.txt`

### 🐛 Debugging
- GDB/LLDB integration
- Breakpoints, step-through, variable inspection
- Launch config in `.vscode/launch.json`

### 📝 Code Quality
- **clang-format** - Automatic code formatting
- **clang-tidy** - Static analysis and suggestions

## File Overview

- `src/main.cpp` - Example C++ program with STL demonstrations
- `src/examples.cpp` - Additional examples for reference
- `CMakeLists.txt` - CMake build configuration
- `.vscode/` - Editor settings, debugging config, and tasks
- `.devcontainer/` - Codespaces environment setup

## VS Code Tasks

Press **Ctrl+Shift+B** to access:
- **C++: build** - Compile the project
- **C++: run** - Build and run executable

## Tips

- 💡 Use `Ctrl+Space` anywhere in C++ code for autocomplete
- 📚 Hover over any function/variable for docs
- 🔧 Modify `CMakeLists.txt` to add more `.cpp` files
- 🎯 Use `F5` to debug with full breakpoint support
- 🧹 Run `clang-format -i src/*.cpp` for auto-formatting

## Extensions

Included in the dev container:
- **C/C++ Extension Pack** - IntelliSense, debugging, code analysis
- **CMake Tools** - CMake integration
- **Code Runner** - Quick code execution

---

Enjoy professional C++ development in Codespaces! 🚀
