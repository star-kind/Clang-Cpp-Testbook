# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:\programs\clions\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\programs\clions\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\workspace\clang-cpp\ResearchExample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\workspace\clang-cpp\ResearchExample\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ResearchExample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ResearchExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ResearchExample.dir/flags.make

CMakeFiles/ResearchExample.dir/main.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ResearchExample.dir/main.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\main.c.obj -c D:\workspace\clang-cpp\ResearchExample\main.c

CMakeFiles/ResearchExample.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/main.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\main.c > CMakeFiles\ResearchExample.dir\main.c.i

CMakeFiles/ResearchExample.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/main.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\main.c -o CMakeFiles\ResearchExample.dir\main.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.obj: ../src/main/clang/get_string.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\get_string.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\get_string.c

CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\get_string.c > CMakeFiles\ResearchExample.dir\src\main\clang\get_string.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\get_string.c -o CMakeFiles\ResearchExample.dir\src\main\clang\get_string.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.obj: ../src/main/clang/pointer_case.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\pointer_case.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\pointer_case.c

CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\pointer_case.c > CMakeFiles\ResearchExample.dir\src\main\clang\pointer_case.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\pointer_case.c -o CMakeFiles\ResearchExample.dir\src\main\clang\pointer_case.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.obj: ../src/main/clang/sequence_table.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\sequence_table.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\sequence_table.c

CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\sequence_table.c > CMakeFiles\ResearchExample.dir\src\main\clang\sequence_table.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\sequence_table.c -o CMakeFiles\ResearchExample.dir\src\main\clang\sequence_table.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.obj: ../src/main/clang/single-direction-link-list/single_dire_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_dire_list.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_dire_list.c

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_dire_list.c > CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_dire_list.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_dire_list.c -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_dire_list.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.obj: ../src/main/clang/single-direction-link-list/single_direction.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_direction.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_direction.c

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_direction.c > CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_direction.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_direction.c -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_direction.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.obj: ../src/main/clang/single-direction-link-list/single_direction_1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_direction_1.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_direction_1.c

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_direction_1.c > CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_direction_1.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_direction_1.c -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_direction_1.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.obj: ../src/main/clang/single-direction-link-list/single_list_demo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_list_demo.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_list_demo.c

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_list_demo.c > CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_list_demo.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\single-direction-link-list\single_list_demo.c -o CMakeFiles\ResearchExample.dir\src\main\clang\single-direction-link-list\single_list_demo.c.s

CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.obj: CMakeFiles/ResearchExample.dir/flags.make
CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.obj: ../src/main/clang/double-direction/demonstrate.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.obj"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ResearchExample.dir\src\main\clang\double-direction\demonstrate.c.obj -c D:\workspace\clang-cpp\ResearchExample\src\main\clang\double-direction\demonstrate.c

CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.i"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\clang-cpp\ResearchExample\src\main\clang\double-direction\demonstrate.c > CMakeFiles\ResearchExample.dir\src\main\clang\double-direction\demonstrate.c.i

CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.s"
	D:\c-compiler\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\clang-cpp\ResearchExample\src\main\clang\double-direction\demonstrate.c -o CMakeFiles\ResearchExample.dir\src\main\clang\double-direction\demonstrate.c.s

# Object files for target ResearchExample
ResearchExample_OBJECTS = \
"CMakeFiles/ResearchExample.dir/main.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.obj" \
"CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.obj"

# External object files for target ResearchExample
ResearchExample_EXTERNAL_OBJECTS =

ResearchExample.exe: CMakeFiles/ResearchExample.dir/main.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/get_string.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/pointer_case.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/sequence_table.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_dire_list.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_direction_1.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/single-direction-link-list/single_list_demo.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/src/main/clang/double-direction/demonstrate.c.obj
ResearchExample.exe: CMakeFiles/ResearchExample.dir/build.make
ResearchExample.exe: CMakeFiles/ResearchExample.dir/linklibs.rsp
ResearchExample.exe: CMakeFiles/ResearchExample.dir/objects1.rsp
ResearchExample.exe: CMakeFiles/ResearchExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable ResearchExample.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ResearchExample.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ResearchExample.dir/build: ResearchExample.exe

.PHONY : CMakeFiles/ResearchExample.dir/build

CMakeFiles/ResearchExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ResearchExample.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ResearchExample.dir/clean

CMakeFiles/ResearchExample.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workspace\clang-cpp\ResearchExample D:\workspace\clang-cpp\ResearchExample D:\workspace\clang-cpp\ResearchExample\cmake-build-debug D:\workspace\clang-cpp\ResearchExample\cmake-build-debug D:\workspace\clang-cpp\ResearchExample\cmake-build-debug\CMakeFiles\ResearchExample.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ResearchExample.dir/depend

