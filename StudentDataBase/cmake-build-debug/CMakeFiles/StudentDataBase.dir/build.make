# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/user/admin/software/clion-2017.3.5/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/user/admin/software/clion-2017.3.5/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/admin/workspace/c_cpp/StudentDataBase

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StudentDataBase.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StudentDataBase.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudentDataBase.dir/flags.make

CMakeFiles/StudentDataBase.dir/main.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StudentDataBase.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/main.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/main.c

CMakeFiles/StudentDataBase.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/main.c > CMakeFiles/StudentDataBase.dir/main.c.i

CMakeFiles/StudentDataBase.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/main.c -o CMakeFiles/StudentDataBase.dir/main.c.s

CMakeFiles/StudentDataBase.dir/main.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/main.c.o.requires

CMakeFiles/StudentDataBase.dir/main.c.o.provides: CMakeFiles/StudentDataBase.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/main.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/main.c.o.provides

CMakeFiles/StudentDataBase.dir/main.c.o.provides.build: CMakeFiles/StudentDataBase.dir/main.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o: ../src/clang/main/create/AddStudent.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/AddStudent.c

CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/AddStudent.c > CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/AddStudent.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o: ../src/clang/main/create/CreateStud.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/CreateStud.c

CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/CreateStud.c > CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/CreateStud.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o: ../src/clang/main/create/FreshData.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/FreshData.c

CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/FreshData.c > CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/create/FreshData.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o: ../src/clang/main/rw/ReadData.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/rw/ReadData.c

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/rw/ReadData.c > CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/rw/ReadData.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o: ../src/clang/main/rw/WriteData.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/rw/WriteData.c

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/rw/WriteData.c > CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/rw/WriteData.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o: ../src/clang/main/delete/DeleteStud.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/delete/DeleteStud.c

CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/delete/DeleteStud.c > CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/delete/DeleteStud.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o: ../src/clang/main/update/UpdateStud.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/update/UpdateStud.c

CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/update/UpdateStud.c > CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/update/UpdateStud.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o: ../src/clang/main/retrive/ExhibitStud.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/retrive/ExhibitStud.c

CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/retrive/ExhibitStud.c > CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/retrive/ExhibitStud.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o: ../src/clang/main/control/CheckOrder.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/control/CheckOrder.c

CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/control/CheckOrder.c > CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/control/CheckOrder.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o


CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o: CMakeFiles/StudentDataBase.dir/flags.make
CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o: ../src/clang/main/control/MainWindow.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o   -c /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/control/MainWindow.c

CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/control/MainWindow.c > CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.i

CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/admin/workspace/c_cpp/StudentDataBase/src/clang/main/control/MainWindow.c -o CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.s

CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.requires:

.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.requires

CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.provides: CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.requires
	$(MAKE) -f CMakeFiles/StudentDataBase.dir/build.make CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.provides.build
.PHONY : CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.provides

CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.provides.build: CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o


# Object files for target StudentDataBase
StudentDataBase_OBJECTS = \
"CMakeFiles/StudentDataBase.dir/main.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o" \
"CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o"

# External object files for target StudentDataBase
StudentDataBase_EXTERNAL_OBJECTS =

StudentDataBase: CMakeFiles/StudentDataBase.dir/main.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o
StudentDataBase: CMakeFiles/StudentDataBase.dir/build.make
StudentDataBase: CMakeFiles/StudentDataBase.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable StudentDataBase"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StudentDataBase.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudentDataBase.dir/build: StudentDataBase

.PHONY : CMakeFiles/StudentDataBase.dir/build

CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/main.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/create/AddStudent.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/create/CreateStud.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/create/FreshData.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/ReadData.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/rw/WriteData.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/delete/DeleteStud.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/update/UpdateStud.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/retrive/ExhibitStud.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/control/CheckOrder.c.o.requires
CMakeFiles/StudentDataBase.dir/requires: CMakeFiles/StudentDataBase.dir/src/clang/main/control/MainWindow.c.o.requires

.PHONY : CMakeFiles/StudentDataBase.dir/requires

CMakeFiles/StudentDataBase.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StudentDataBase.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StudentDataBase.dir/clean

CMakeFiles/StudentDataBase.dir/depend:
	cd /home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/admin/workspace/c_cpp/StudentDataBase /home/user/admin/workspace/c_cpp/StudentDataBase /home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug /home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug /home/user/admin/workspace/c_cpp/StudentDataBase/cmake-build-debug/CMakeFiles/StudentDataBase.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StudentDataBase.dir/depend
