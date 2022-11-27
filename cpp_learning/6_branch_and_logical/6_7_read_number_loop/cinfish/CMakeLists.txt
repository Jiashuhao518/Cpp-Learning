# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.17)
# Set the project name
project (cinfish)

# Add an executable
add_executable(cinfish cinfish.cpp)