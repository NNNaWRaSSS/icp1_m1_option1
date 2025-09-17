# CP1_25_Module_I_Assignment

## Overview

This assignment focuses on implementing functions for basic geometric calculations in C, including perimeter and area for rectangles, circles, and triangles. You will practice input validation and use automated tests to verify your implementation.

## Tasks

In `src/myprogram.c`, complete the following functions:

- `double rectangle_perimeter(double length, double width)`
- `double rectangle_area(double length, double width)`
- `double circle_perimeter(double radius)`
- `double circle_area(double radius)`
- `double triangle_perimeter(double side1, double side2, double side3)`
- `double triangle_area(double base, double height)`

**Requirements:**
- Use correct mathematical formulas.
- Return `-1` for invalid input (negative values, or zero for triangle sides).
- Do not change function signatures.

## Automated Testing

Unit tests for all functions are provided in `tests/tests.cpp` using [GoogleTest](https://github.com/google/googletest):

- **Positive values:** Should return correct results.
- **Zero values:** Should return `0` or `-1` (see triangle tests).
- **Negative/mixed values:** Should return `-1` for any invalid input.

After implementing your functions, build the project and run the tests to verify correctness.

## Build & Test Instructions

This project uses [CMake](https://cmake.org/) for cross-platform building, and is intended to be used inside a **conda environment** (with compilers and dependencies pre-installed).

### Steps

1. **Clone the repository**

   ```bash
   git clone https://github.com/NNNaWRaSSS/CP1_25_Module_I_Assignment.git
   cd CP1_25_Module_I_Assignment
   ```

2. **Activate your conda environment**

   Make sure you have activated the appropriate conda environment with C/C++ compilers and CMake installed.

   ```bash
   conda activate <your_env_name>
   ```

3. **Configure and build the project**

   *No need to manually create the build directory; CMake will handle it:*

   ```bash
   cmake -B build -DCMAKE_BUILD_TYPE=Debug
   cmake --build build
   ```

4. **Run the tests**

   ```bash
   cd build
   ctest
   # Or run the executable directly:
   ./tests/tests
   ```

### Static Analysis

If [cppcheck](http://cppcheck.sourceforge.net/) is installed, static analysis runs automatically during a Debug build. If not, you will see a warning.

## File Structure

```
CP1_25_Module_I_Assignment/
├── src/
│   ├── myprogram.c         # Implement your functions here
│   └── CMakeLists.txt      # Build instructions for library
├── tests/
│   ├── tests.cpp           # GoogleTest-based test suite
│   └── CMakeLists.txt      # Build instructions for tests
├── CMakeLists.txt          # Top-level build configuration
└── README.md               # Project documentation
```

## Submission Guidelines

- Only edit `src/myprogram.c`.
- Do **not** change function signatures.
- All tests must pass before submission.

## Getting Help

For questions, contact your instructor or open an issue in this repository.

---

**Good luck!**
