# OOP_Project
Air Hockey game

UML Diagram UPDATED: https://app.moqups.com/QL37FybhN4PEcriMZYKmMy5Dlp5YZVeL/view/page/a8bfb0d3e
Project UML Diagram Link: https://app.moqups.com/QL37FybhN4PEcriMZYKmMy5Dlp5YZVeL/view/page/a8bfb0d3e

2. Build using CMake:
Please ensure you have gcc and cmake installed. You can check this by opening Powershell and typing:

cmake --version this should output the version of CMake
gcc --version this should tell you the version of gcc
If cmake isn't installed, follow the instructions here:

Install cmake from the following link https://cmake.org/download/. To test if cmake has been installed properly run cmake --version from powershell or terminal
To install gcc using mingw, you can follow the instructions from here:

https://code.visualstudio.com/docs/cpp/config-mingw
Please don't install SDL upfront. If you have already installed SDL, try removing it completely.

Run the following commands on Powershell on Windows or terminal on Linux and MacOS.

run git clone https://github.com/kaynat-zehra/OOP_Project.git
cd CS224-team6-Project-Fall2023
mkdir build
cd build
On Linux use cmake ... On windows use cmake -G "MinGW Makefiles" .. if you install gcc via MSYS2. If you installed gcc via strawberry perl, use cmake -G "Unix Makefiles" ..
On Linux use make. On windows use mingw32-make if you used MSYS2 to install gcc. If you used strawberry perl, use gmake
