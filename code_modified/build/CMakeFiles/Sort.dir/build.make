# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/usuario/practicas/AyEDA/PR5 MODI"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/usuario/practicas/AyEDA/PR5 MODI/build"

# Include any dependencies generated for this target.
include CMakeFiles/Sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort.dir/flags.make

CMakeFiles/Sort.dir/src/sort_main.cc.o: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/src/sort_main.cc.o: ../src/sort_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/usuario/practicas/AyEDA/PR5 MODI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort.dir/src/sort_main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sort.dir/src/sort_main.cc.o -c "/home/usuario/practicas/AyEDA/PR5 MODI/src/sort_main.cc"

CMakeFiles/Sort.dir/src/sort_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort.dir/src/sort_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/usuario/practicas/AyEDA/PR5 MODI/src/sort_main.cc" > CMakeFiles/Sort.dir/src/sort_main.cc.i

CMakeFiles/Sort.dir/src/sort_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/src/sort_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/usuario/practicas/AyEDA/PR5 MODI/src/sort_main.cc" -o CMakeFiles/Sort.dir/src/sort_main.cc.s

# Object files for target Sort
Sort_OBJECTS = \
"CMakeFiles/Sort.dir/src/sort_main.cc.o"

# External object files for target Sort
Sort_EXTERNAL_OBJECTS =

Sort: CMakeFiles/Sort.dir/src/sort_main.cc.o
Sort: CMakeFiles/Sort.dir/build.make
Sort: CMakeFiles/Sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/usuario/practicas/AyEDA/PR5 MODI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort.dir/build: Sort

.PHONY : CMakeFiles/Sort.dir/build

CMakeFiles/Sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sort.dir/clean

CMakeFiles/Sort.dir/depend:
	cd "/home/usuario/practicas/AyEDA/PR5 MODI/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/usuario/practicas/AyEDA/PR5 MODI" "/home/usuario/practicas/AyEDA/PR5 MODI" "/home/usuario/practicas/AyEDA/PR5 MODI/build" "/home/usuario/practicas/AyEDA/PR5 MODI/build" "/home/usuario/practicas/AyEDA/PR5 MODI/build/CMakeFiles/Sort.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Sort.dir/depend

