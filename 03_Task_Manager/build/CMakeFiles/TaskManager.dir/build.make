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
CMAKE_SOURCE_DIR = /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build

# Include any dependencies generated for this target.
include CMakeFiles/TaskManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TaskManager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TaskManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TaskManager.dir/flags.make

CMakeFiles/TaskManager.dir/src/main.cpp.o: CMakeFiles/TaskManager.dir/flags.make
CMakeFiles/TaskManager.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/TaskManager.dir/src/main.cpp.o: CMakeFiles/TaskManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TaskManager.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TaskManager.dir/src/main.cpp.o -MF CMakeFiles/TaskManager.dir/src/main.cpp.o.d -o CMakeFiles/TaskManager.dir/src/main.cpp.o -c /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/src/main.cpp

CMakeFiles/TaskManager.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TaskManager.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/src/main.cpp > CMakeFiles/TaskManager.dir/src/main.cpp.i

CMakeFiles/TaskManager.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TaskManager.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/src/main.cpp -o CMakeFiles/TaskManager.dir/src/main.cpp.s

# Object files for target TaskManager
TaskManager_OBJECTS = \
"CMakeFiles/TaskManager.dir/src/main.cpp.o"

# External object files for target TaskManager
TaskManager_EXTERNAL_OBJECTS =

TaskManager: CMakeFiles/TaskManager.dir/src/main.cpp.o
TaskManager: CMakeFiles/TaskManager.dir/build.make
TaskManager: CMakeFiles/TaskManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TaskManager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TaskManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TaskManager.dir/build: TaskManager
.PHONY : CMakeFiles/TaskManager.dir/build

CMakeFiles/TaskManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TaskManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TaskManager.dir/clean

CMakeFiles/TaskManager.dir/depend:
	cd /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build /home/hnelamir/EL/04_Inter_CPP/CPP_Intermediate_Projects/03_Task_Manager/build/CMakeFiles/TaskManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TaskManager.dir/depend

