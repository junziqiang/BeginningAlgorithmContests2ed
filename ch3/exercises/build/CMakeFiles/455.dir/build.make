# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /apps/junziqiang/bin/cmake

# The command to remove a file.
RM = /apps/junziqiang/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/aospc/ch3/exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/aospc/ch3/exercises/build

# Include any dependencies generated for this target.
include CMakeFiles/455.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/455.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/455.dir/flags.make

CMakeFiles/455.dir/uva455.cpp.o: CMakeFiles/455.dir/flags.make
CMakeFiles/455.dir/uva455.cpp.o: ../uva455.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/aospc/ch3/exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/455.dir/uva455.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/455.dir/uva455.cpp.o -c /root/aospc/ch3/exercises/uva455.cpp

CMakeFiles/455.dir/uva455.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/455.dir/uva455.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/aospc/ch3/exercises/uva455.cpp > CMakeFiles/455.dir/uva455.cpp.i

CMakeFiles/455.dir/uva455.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/455.dir/uva455.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/aospc/ch3/exercises/uva455.cpp -o CMakeFiles/455.dir/uva455.cpp.s

# Object files for target 455
455_OBJECTS = \
"CMakeFiles/455.dir/uva455.cpp.o"

# External object files for target 455
455_EXTERNAL_OBJECTS =

../bin/455: CMakeFiles/455.dir/uva455.cpp.o
../bin/455: CMakeFiles/455.dir/build.make
../bin/455: CMakeFiles/455.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/aospc/ch3/exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/455"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/455.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/455.dir/build: ../bin/455

.PHONY : CMakeFiles/455.dir/build

CMakeFiles/455.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/455.dir/cmake_clean.cmake
.PHONY : CMakeFiles/455.dir/clean

CMakeFiles/455.dir/depend:
	cd /root/aospc/ch3/exercises/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/aospc/ch3/exercises /root/aospc/ch3/exercises /root/aospc/ch3/exercises/build /root/aospc/ch3/exercises/build /root/aospc/ch3/exercises/build/CMakeFiles/455.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/455.dir/depend

