# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /cygdrive/c/Users/Duc/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Duc/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/testAvl.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/testAvl.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/testAvl.dir/flags.make

test/CMakeFiles/testAvl.dir/main.cpp.o: test/CMakeFiles/testAvl.dir/flags.make
test/CMakeFiles/testAvl.dir/main.cpp.o: ../test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/testAvl.dir/main.cpp.o"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testAvl.dir/main.cpp.o -c /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test/main.cpp

test/CMakeFiles/testAvl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testAvl.dir/main.cpp.i"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test/main.cpp > CMakeFiles/testAvl.dir/main.cpp.i

test/CMakeFiles/testAvl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testAvl.dir/main.cpp.s"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test/main.cpp -o CMakeFiles/testAvl.dir/main.cpp.s

test/CMakeFiles/testAvl.dir/main.cpp.o.requires:

.PHONY : test/CMakeFiles/testAvl.dir/main.cpp.o.requires

test/CMakeFiles/testAvl.dir/main.cpp.o.provides: test/CMakeFiles/testAvl.dir/main.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/testAvl.dir/build.make test/CMakeFiles/testAvl.dir/main.cpp.o.provides.build
.PHONY : test/CMakeFiles/testAvl.dir/main.cpp.o.provides

test/CMakeFiles/testAvl.dir/main.cpp.o.provides.build: test/CMakeFiles/testAvl.dir/main.cpp.o


test/CMakeFiles/testAvl.dir/testAvl.cpp.o: test/CMakeFiles/testAvl.dir/flags.make
test/CMakeFiles/testAvl.dir/testAvl.cpp.o: ../test/testAvl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/testAvl.dir/testAvl.cpp.o"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testAvl.dir/testAvl.cpp.o -c /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test/testAvl.cpp

test/CMakeFiles/testAvl.dir/testAvl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testAvl.dir/testAvl.cpp.i"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test/testAvl.cpp > CMakeFiles/testAvl.dir/testAvl.cpp.i

test/CMakeFiles/testAvl.dir/testAvl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testAvl.dir/testAvl.cpp.s"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && /usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test/testAvl.cpp -o CMakeFiles/testAvl.dir/testAvl.cpp.s

test/CMakeFiles/testAvl.dir/testAvl.cpp.o.requires:

.PHONY : test/CMakeFiles/testAvl.dir/testAvl.cpp.o.requires

test/CMakeFiles/testAvl.dir/testAvl.cpp.o.provides: test/CMakeFiles/testAvl.dir/testAvl.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/testAvl.dir/build.make test/CMakeFiles/testAvl.dir/testAvl.cpp.o.provides.build
.PHONY : test/CMakeFiles/testAvl.dir/testAvl.cpp.o.provides

test/CMakeFiles/testAvl.dir/testAvl.cpp.o.provides.build: test/CMakeFiles/testAvl.dir/testAvl.cpp.o


# Object files for target testAvl
testAvl_OBJECTS = \
"CMakeFiles/testAvl.dir/main.cpp.o" \
"CMakeFiles/testAvl.dir/testAvl.cpp.o"

# External object files for target testAvl
testAvl_EXTERNAL_OBJECTS =

test/testAvl.exe: test/CMakeFiles/testAvl.dir/main.cpp.o
test/testAvl.exe: test/CMakeFiles/testAvl.dir/testAvl.cpp.o
test/testAvl.exe: test/CMakeFiles/testAvl.dir/build.make
test/testAvl.exe: googletest-build/googlemock/gtest/libgtestd.a
test/testAvl.exe: googletest-build/googlemock/libgmockd.a
test/testAvl.exe: test/CMakeFiles/testAvl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testAvl.exe"
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testAvl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/testAvl.dir/build: test/testAvl.exe

.PHONY : test/CMakeFiles/testAvl.dir/build

test/CMakeFiles/testAvl.dir/requires: test/CMakeFiles/testAvl.dir/main.cpp.o.requires
test/CMakeFiles/testAvl.dir/requires: test/CMakeFiles/testAvl.dir/testAvl.cpp.o.requires

.PHONY : test/CMakeFiles/testAvl.dir/requires

test/CMakeFiles/testAvl.dir/clean:
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/testAvl.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/testAvl.dir/clean

test/CMakeFiles/testAvl.dir/depend:
	cd /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/test /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test /cygdrive/c/Users/Duc/CLionProjects/blatt-7-aufgabe-1-asians_never_die/cmake-build-debug/test/CMakeFiles/testAvl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/testAvl.dir/depend

