# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.17)
# Set the project name
project (getkeyboard)

# Add an executable
add_executable(getkeyboard getkeyboard.cpp)