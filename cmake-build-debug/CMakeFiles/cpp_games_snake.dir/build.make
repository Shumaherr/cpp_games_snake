# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\PROGS\Projects\cpp_games_snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\PROGS\Projects\cpp_games_snake\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp_games_snake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_games_snake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_games_snake.dir/flags.make

CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.obj: CMakeFiles/cpp_games_snake.dir/flags.make
CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.obj: CMakeFiles/cpp_games_snake.dir/includes_CXX.rsp
CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.obj: ../SnakeGame/Fruit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.obj"
	C:\msys64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Fruit.cpp.obj -c C:\PROGS\Projects\cpp_games_snake\SnakeGame\Fruit.cpp

CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.i"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\PROGS\Projects\cpp_games_snake\SnakeGame\Fruit.cpp > CMakeFiles\cpp_games_snake.dir\SnakeGame\Fruit.cpp.i

CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.s"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\PROGS\Projects\cpp_games_snake\SnakeGame\Fruit.cpp -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Fruit.cpp.s

CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.obj: CMakeFiles/cpp_games_snake.dir/flags.make
CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.obj: CMakeFiles/cpp_games_snake.dir/includes_CXX.rsp
CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.obj: ../SnakeGame/GameObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.obj"
	C:\msys64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpp_games_snake.dir\SnakeGame\GameObject.cpp.obj -c C:\PROGS\Projects\cpp_games_snake\SnakeGame\GameObject.cpp

CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.i"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\PROGS\Projects\cpp_games_snake\SnakeGame\GameObject.cpp > CMakeFiles\cpp_games_snake.dir\SnakeGame\GameObject.cpp.i

CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.s"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\PROGS\Projects\cpp_games_snake\SnakeGame\GameObject.cpp -o CMakeFiles\cpp_games_snake.dir\SnakeGame\GameObject.cpp.s

CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.obj: CMakeFiles/cpp_games_snake.dir/flags.make
CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.obj: CMakeFiles/cpp_games_snake.dir/includes_CXX.rsp
CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.obj: ../SnakeGame/Snake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.obj"
	C:\msys64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Snake.cpp.obj -c C:\PROGS\Projects\cpp_games_snake\SnakeGame\Snake.cpp

CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.i"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\PROGS\Projects\cpp_games_snake\SnakeGame\Snake.cpp > CMakeFiles\cpp_games_snake.dir\SnakeGame\Snake.cpp.i

CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.s"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\PROGS\Projects\cpp_games_snake\SnakeGame\Snake.cpp -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Snake.cpp.s

CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.obj: CMakeFiles/cpp_games_snake.dir/flags.make
CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.obj: CMakeFiles/cpp_games_snake.dir/includes_CXX.rsp
CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.obj: ../SnakeGame/Source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.obj"
	C:\msys64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Source.cpp.obj -c C:\PROGS\Projects\cpp_games_snake\SnakeGame\Source.cpp

CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.i"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\PROGS\Projects\cpp_games_snake\SnakeGame\Source.cpp > CMakeFiles\cpp_games_snake.dir\SnakeGame\Source.cpp.i

CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.s"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\PROGS\Projects\cpp_games_snake\SnakeGame\Source.cpp -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Source.cpp.s

CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.obj: CMakeFiles/cpp_games_snake.dir/flags.make
CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.obj: CMakeFiles/cpp_games_snake.dir/includes_CXX.rsp
CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.obj: ../SnakeGame/Utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.obj"
	C:\msys64\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Utils.cpp.obj -c C:\PROGS\Projects\cpp_games_snake\SnakeGame\Utils.cpp

CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.i"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\PROGS\Projects\cpp_games_snake\SnakeGame\Utils.cpp > CMakeFiles\cpp_games_snake.dir\SnakeGame\Utils.cpp.i

CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.s"
	C:\msys64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\PROGS\Projects\cpp_games_snake\SnakeGame\Utils.cpp -o CMakeFiles\cpp_games_snake.dir\SnakeGame\Utils.cpp.s

# Object files for target cpp_games_snake
cpp_games_snake_OBJECTS = \
"CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.obj" \
"CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.obj" \
"CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.obj" \
"CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.obj" \
"CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.obj"

# External object files for target cpp_games_snake
cpp_games_snake_EXTERNAL_OBJECTS =

cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/SnakeGame/Fruit.cpp.obj
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/SnakeGame/GameObject.cpp.obj
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/SnakeGame/Snake.cpp.obj
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/SnakeGame/Source.cpp.obj
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/SnakeGame/Utils.cpp.obj
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/build.make
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/linklibs.rsp
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/objects1.rsp
cpp_games_snake.exe: CMakeFiles/cpp_games_snake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable cpp_games_snake.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cpp_games_snake.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_games_snake.dir/build: cpp_games_snake.exe

.PHONY : CMakeFiles/cpp_games_snake.dir/build

CMakeFiles/cpp_games_snake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cpp_games_snake.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cpp_games_snake.dir/clean

CMakeFiles/cpp_games_snake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\PROGS\Projects\cpp_games_snake C:\PROGS\Projects\cpp_games_snake C:\PROGS\Projects\cpp_games_snake\cmake-build-debug C:\PROGS\Projects\cpp_games_snake\cmake-build-debug C:\PROGS\Projects\cpp_games_snake\cmake-build-debug\CMakeFiles\cpp_games_snake.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp_games_snake.dir/depend
