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
CMAKE_SOURCE_DIR = /home/rahul/Workstation/Work_station/c_cmake/basic/organize

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI

# Include any dependencies generated for this target.
include CMakeFiles/executable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/executable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/executable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/executable.dir/flags.make

CMakeFiles/executable.dir/main.c.o: CMakeFiles/executable.dir/flags.make
CMakeFiles/executable.dir/main.c.o: ../main.c
CMakeFiles/executable.dir/main.c.o: CMakeFiles/executable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/executable.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/executable.dir/main.c.o -MF CMakeFiles/executable.dir/main.c.o.d -o CMakeFiles/executable.dir/main.c.o -c /home/rahul/Workstation/Work_station/c_cmake/basic/organize/main.c

CMakeFiles/executable.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/executable.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rahul/Workstation/Work_station/c_cmake/basic/organize/main.c > CMakeFiles/executable.dir/main.c.i

CMakeFiles/executable.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/executable.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rahul/Workstation/Work_station/c_cmake/basic/organize/main.c -o CMakeFiles/executable.dir/main.c.s

# Object files for target executable
executable_OBJECTS = \
"CMakeFiles/executable.dir/main.c.o"

# External object files for target executable
executable_EXTERNAL_OBJECTS =

executable: CMakeFiles/executable.dir/main.c.o
executable: CMakeFiles/executable.dir/build.make
executable: CMakeFiles/executable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable executable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/executable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/executable.dir/build: executable
.PHONY : CMakeFiles/executable.dir/build

CMakeFiles/executable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/executable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/executable.dir/clean

CMakeFiles/executable.dir/depend:
	cd /home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/Workstation/Work_station/c_cmake/basic/organize /home/rahul/Workstation/Work_station/c_cmake/basic/organize /home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI /home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI /home/rahul/Workstation/Work_station/c_cmake/basic/organize/methodI/CMakeFiles/executable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/executable.dir/depend

