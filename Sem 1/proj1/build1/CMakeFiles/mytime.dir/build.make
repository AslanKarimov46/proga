# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/stud-11/Desktop/Aslan/proga/proj1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stud-11/Desktop/Aslan/proga/proj1/build1

# Include any dependencies generated for this target.
include CMakeFiles/mytime.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mytime.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mytime.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mytime.dir/flags.make

CMakeFiles/mytime.dir/time2.cpp.o: CMakeFiles/mytime.dir/flags.make
CMakeFiles/mytime.dir/time2.cpp.o: /home/stud-11/Desktop/Aslan/proga/proj1/time2.cpp
CMakeFiles/mytime.dir/time2.cpp.o: CMakeFiles/mytime.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/stud-11/Desktop/Aslan/proga/proj1/build1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mytime.dir/time2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mytime.dir/time2.cpp.o -MF CMakeFiles/mytime.dir/time2.cpp.o.d -o CMakeFiles/mytime.dir/time2.cpp.o -c /home/stud-11/Desktop/Aslan/proga/proj1/time2.cpp

CMakeFiles/mytime.dir/time2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mytime.dir/time2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stud-11/Desktop/Aslan/proga/proj1/time2.cpp > CMakeFiles/mytime.dir/time2.cpp.i

CMakeFiles/mytime.dir/time2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mytime.dir/time2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stud-11/Desktop/Aslan/proga/proj1/time2.cpp -o CMakeFiles/mytime.dir/time2.cpp.s

# Object files for target mytime
mytime_OBJECTS = \
"CMakeFiles/mytime.dir/time2.cpp.o"

# External object files for target mytime
mytime_EXTERNAL_OBJECTS =

libmytime.a: CMakeFiles/mytime.dir/time2.cpp.o
libmytime.a: CMakeFiles/mytime.dir/build.make
libmytime.a: CMakeFiles/mytime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/stud-11/Desktop/Aslan/proga/proj1/build1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmytime.a"
	$(CMAKE_COMMAND) -P CMakeFiles/mytime.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mytime.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mytime.dir/build: libmytime.a
.PHONY : CMakeFiles/mytime.dir/build

CMakeFiles/mytime.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mytime.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mytime.dir/clean

CMakeFiles/mytime.dir/depend:
	cd /home/stud-11/Desktop/Aslan/proga/proj1/build1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stud-11/Desktop/Aslan/proga/proj1 /home/stud-11/Desktop/Aslan/proga/proj1 /home/stud-11/Desktop/Aslan/proga/proj1/build1 /home/stud-11/Desktop/Aslan/proga/proj1/build1 /home/stud-11/Desktop/Aslan/proga/proj1/build1/CMakeFiles/mytime.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/mytime.dir/depend

