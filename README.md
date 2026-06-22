# C++ REPL Codespaces Template

A ready-to-use GitHub Codespaces template for **interactive C++ development** with:
- ✅ **Autocomplete & IntelliSense** via MS C++ Tools
- ✅ **Cling REPL** for interactive C++ execution
- ✅ **CMake** build system
- ✅ **Debugging** support (gdb/lldb)
- ✅ **Code formatting** (clang-format)

## Quick Start

### 1. Open in Codespaces
Click "Code" → "Codespaces" → "Create codespace on main"

### 2. Run Examples
```bash
cmake --build build
./build/main
```

### 3. Interactive REPL (Cling)
```bash
cling
```

Then in the REPL:
```cpp
#include <iostream>
int x = 5;
std::cout << x * 2 << std::endl;  // Autocomplete works here!
```

## Tasks in VS Code

Use `Ctrl+Shift+B` to access:
- **C++: build** - Compile the project
- **C++: run** - Build and run
- **C++: REPL (cling)** - Start interactive shell

## File Overview

- `src/main.cpp` - Example C++ program
- `src/examples.cpp` - REPL practice snippets
- `CMakeLists.txt` - Build configuration
- `.vscode/` - Editor settings, launch configs, and tasks
- `.devcontainer/` - Codespaces environment setup

## Debugging

Press `F5` to debug `main` with GDB breakpoints, stepping, and variable inspection.

## Extensions Included

- **C/C++ Extension Pack** - IntelliSense, debugging, code analysis
- **CMake Tools** - CMake integration
- **Code Runner** - Quick code execution

## Tips

- Type any C++ STL class/function and press `Ctrl+Space` for autocomplete
- Hover over symbols for documentation
- Use `//` or `/* */` for inline comments
- Modify `CMakeLists.txt` to add more source files

Enjoy interactive C++ development! 🚀
