# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\IDE\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\IDE\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\xuexi\12_16_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\xuexi\12_16_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/12_16_2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/12_16_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/12_16_2.dir/flags.make

CMakeFiles/12_16_2.dir/main.c.obj: CMakeFiles/12_16_2.dir/flags.make
CMakeFiles/12_16_2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\xuexi\12_16_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/12_16_2.dir/main.c.obj"
	D:\Chuanjing\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\12_16_2.dir\main.c.obj -c D:\xuexi\12_16_2\main.c

CMakeFiles/12_16_2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/12_16_2.dir/main.c.i"
	D:\Chuanjing\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\xuexi\12_16_2\main.c > CMakeFiles\12_16_2.dir\main.c.i

CMakeFiles/12_16_2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/12_16_2.dir/main.c.s"
	D:\Chuanjing\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\xuexi\12_16_2\main.c -o CMakeFiles\12_16_2.dir\main.c.s

# Object files for target 12_16_2
12_16_2_OBJECTS = \
"CMakeFiles/12_16_2.dir/main.c.obj"

# External object files for target 12_16_2
12_16_2_EXTERNAL_OBJECTS =

12_16_2.exe: CMakeFiles/12_16_2.dir/main.c.obj
12_16_2.exe: CMakeFiles/12_16_2.dir/build.make
12_16_2.exe: CMakeFiles/12_16_2.dir/linklibs.rsp
12_16_2.exe: CMakeFiles/12_16_2.dir/objects1.rsp
12_16_2.exe: CMakeFiles/12_16_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\xuexi\12_16_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 12_16_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\12_16_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/12_16_2.dir/build: 12_16_2.exe
.PHONY : CMakeFiles/12_16_2.dir/build

CMakeFiles/12_16_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\12_16_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/12_16_2.dir/clean

CMakeFiles/12_16_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\xuexi\12_16_2 D:\xuexi\12_16_2 D:\xuexi\12_16_2\cmake-build-debug D:\xuexi\12_16_2\cmake-build-debug D:\xuexi\12_16_2\cmake-build-debug\CMakeFiles\12_16_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/12_16_2.dir/depend

