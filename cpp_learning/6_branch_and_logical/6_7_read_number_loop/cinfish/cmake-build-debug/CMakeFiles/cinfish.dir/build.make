# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cinfish.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cinfish.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cinfish.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cinfish.dir/flags.make

CMakeFiles/cinfish.dir/cinfish.cpp.o: CMakeFiles/cinfish.dir/flags.make
CMakeFiles/cinfish.dir/cinfish.cpp.o: ../cinfish.cpp
CMakeFiles/cinfish.dir/cinfish.cpp.o: CMakeFiles/cinfish.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cinfish.dir/cinfish.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cinfish.dir/cinfish.cpp.o -MF CMakeFiles/cinfish.dir/cinfish.cpp.o.d -o CMakeFiles/cinfish.dir/cinfish.cpp.o -c /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cinfish.cpp

CMakeFiles/cinfish.dir/cinfish.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cinfish.dir/cinfish.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cinfish.cpp > CMakeFiles/cinfish.dir/cinfish.cpp.i

CMakeFiles/cinfish.dir/cinfish.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cinfish.dir/cinfish.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cinfish.cpp -o CMakeFiles/cinfish.dir/cinfish.cpp.s

# Object files for target cinfish
cinfish_OBJECTS = \
"CMakeFiles/cinfish.dir/cinfish.cpp.o"

# External object files for target cinfish
cinfish_EXTERNAL_OBJECTS =

cinfish: CMakeFiles/cinfish.dir/cinfish.cpp.o
cinfish: CMakeFiles/cinfish.dir/build.make
cinfish: CMakeFiles/cinfish.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cinfish"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cinfish.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cinfish.dir/build: cinfish
.PHONY : CMakeFiles/cinfish.dir/build

CMakeFiles/cinfish.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cinfish.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cinfish.dir/clean

CMakeFiles/cinfish.dir/depend:
	cd /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug /home/jiash21/projects/cpp_learning/6_branch_and_logical/6_7_read_number_loop/cinfish/cmake-build-debug/CMakeFiles/cinfish.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cinfish.dir/depend
