# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\George\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\163.13906.4\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\George\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\163.13906.4\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\C++\Projects\Checkers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\C++\Projects\Checkers\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Checkers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Checkers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Checkers.dir/flags.make

CMakeFiles/Checkers.dir/main.c.obj: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\C++\Projects\Checkers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Checkers.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Checkers.dir\main.c.obj   -c F:\C++\Projects\Checkers\main.c

CMakeFiles/Checkers.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Checkers.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\C++\Projects\Checkers\main.c > CMakeFiles\Checkers.dir\main.c.i

CMakeFiles/Checkers.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Checkers.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\C++\Projects\Checkers\main.c -o CMakeFiles\Checkers.dir\main.c.s

CMakeFiles/Checkers.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Checkers.dir/main.c.obj.requires

CMakeFiles/Checkers.dir/main.c.obj.provides: CMakeFiles/Checkers.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Checkers.dir\build.make CMakeFiles/Checkers.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Checkers.dir/main.c.obj.provides

CMakeFiles/Checkers.dir/main.c.obj.provides.build: CMakeFiles/Checkers.dir/main.c.obj


CMakeFiles/Checkers.dir/game.c.obj: CMakeFiles/Checkers.dir/flags.make
CMakeFiles/Checkers.dir/game.c.obj: ../game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\C++\Projects\Checkers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Checkers.dir/game.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Checkers.dir\game.c.obj   -c F:\C++\Projects\Checkers\game.c

CMakeFiles/Checkers.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Checkers.dir/game.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\C++\Projects\Checkers\game.c > CMakeFiles\Checkers.dir\game.c.i

CMakeFiles/Checkers.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Checkers.dir/game.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\C++\Projects\Checkers\game.c -o CMakeFiles\Checkers.dir\game.c.s

CMakeFiles/Checkers.dir/game.c.obj.requires:

.PHONY : CMakeFiles/Checkers.dir/game.c.obj.requires

CMakeFiles/Checkers.dir/game.c.obj.provides: CMakeFiles/Checkers.dir/game.c.obj.requires
	$(MAKE) -f CMakeFiles\Checkers.dir\build.make CMakeFiles/Checkers.dir/game.c.obj.provides.build
.PHONY : CMakeFiles/Checkers.dir/game.c.obj.provides

CMakeFiles/Checkers.dir/game.c.obj.provides.build: CMakeFiles/Checkers.dir/game.c.obj


# Object files for target Checkers
Checkers_OBJECTS = \
"CMakeFiles/Checkers.dir/main.c.obj" \
"CMakeFiles/Checkers.dir/game.c.obj"

# External object files for target Checkers
Checkers_EXTERNAL_OBJECTS =

Checkers.exe: CMakeFiles/Checkers.dir/main.c.obj
Checkers.exe: CMakeFiles/Checkers.dir/game.c.obj
Checkers.exe: CMakeFiles/Checkers.dir/build.make
Checkers.exe: CMakeFiles/Checkers.dir/linklibs.rsp
Checkers.exe: CMakeFiles/Checkers.dir/objects1.rsp
Checkers.exe: CMakeFiles/Checkers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\C++\Projects\Checkers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Checkers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Checkers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Checkers.dir/build: Checkers.exe

.PHONY : CMakeFiles/Checkers.dir/build

CMakeFiles/Checkers.dir/requires: CMakeFiles/Checkers.dir/main.c.obj.requires
CMakeFiles/Checkers.dir/requires: CMakeFiles/Checkers.dir/game.c.obj.requires

.PHONY : CMakeFiles/Checkers.dir/requires

CMakeFiles/Checkers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Checkers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Checkers.dir/clean

CMakeFiles/Checkers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\C++\Projects\Checkers F:\C++\Projects\Checkers F:\C++\Projects\Checkers\cmake-build-debug F:\C++\Projects\Checkers\cmake-build-debug F:\C++\Projects\Checkers\cmake-build-debug\CMakeFiles\Checkers.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Checkers.dir/depend

