# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.9/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.9/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build"

# Include any dependencies generated for this target.
include CMakeFiles/Sort.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Sort.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort.dir/flags.make

CMakeFiles/Sort.dir/src/sort_main.cc.o: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/src/sort_main.cc.o: /Users/javiersantana/Desktop/INF\ 2022:2023/Maquina\ Virtual/AyEDA/PR5/PR5_no_modi/src/sort_main.cc
CMakeFiles/Sort.dir/src/sort_main.cc.o: CMakeFiles/Sort.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort.dir/src/sort_main.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sort.dir/src/sort_main.cc.o -MF CMakeFiles/Sort.dir/src/sort_main.cc.o.d -o CMakeFiles/Sort.dir/src/sort_main.cc.o -c "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/src/sort_main.cc"

CMakeFiles/Sort.dir/src/sort_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Sort.dir/src/sort_main.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/src/sort_main.cc" > CMakeFiles/Sort.dir/src/sort_main.cc.i

CMakeFiles/Sort.dir/src/sort_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/src/sort_main.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/src/sort_main.cc" -o CMakeFiles/Sort.dir/src/sort_main.cc.s

# Object files for target Sort
Sort_OBJECTS = \
"CMakeFiles/Sort.dir/src/sort_main.cc.o"

# External object files for target Sort
Sort_EXTERNAL_OBJECTS =

Sort: CMakeFiles/Sort.dir/src/sort_main.cc.o
Sort: CMakeFiles/Sort.dir/build.make
Sort: CMakeFiles/Sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort.dir/build: Sort
.PHONY : CMakeFiles/Sort.dir/build

CMakeFiles/Sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sort.dir/clean

CMakeFiles/Sort.dir/depend:
	cd "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi" "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi" "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build" "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build" "/Users/javiersantana/Desktop/INF 2022:2023/Maquina Virtual/AyEDA/PR5/PR5_no_modi/build/CMakeFiles/Sort.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Sort.dir/depend

