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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/deep_copy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/deep_copy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/deep_copy.dir/flags.make

CMakeFiles/deep_copy.dir/main.cpp.o: CMakeFiles/deep_copy.dir/flags.make
CMakeFiles/deep_copy.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/deep_copy.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/deep_copy.dir/main.cpp.o -c /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/main.cpp

CMakeFiles/deep_copy.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/deep_copy.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/main.cpp > CMakeFiles/deep_copy.dir/main.cpp.i

CMakeFiles/deep_copy.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/deep_copy.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/main.cpp -o CMakeFiles/deep_copy.dir/main.cpp.s

CMakeFiles/deep_copy.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/deep_copy.dir/main.cpp.o.requires

CMakeFiles/deep_copy.dir/main.cpp.o.provides: CMakeFiles/deep_copy.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/deep_copy.dir/build.make CMakeFiles/deep_copy.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/deep_copy.dir/main.cpp.o.provides

CMakeFiles/deep_copy.dir/main.cpp.o.provides.build: CMakeFiles/deep_copy.dir/main.cpp.o


# Object files for target deep_copy
deep_copy_OBJECTS = \
"CMakeFiles/deep_copy.dir/main.cpp.o"

# External object files for target deep_copy
deep_copy_EXTERNAL_OBJECTS =

deep_copy: CMakeFiles/deep_copy.dir/main.cpp.o
deep_copy: CMakeFiles/deep_copy.dir/build.make
deep_copy: CMakeFiles/deep_copy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable deep_copy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/deep_copy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/deep_copy.dir/build: deep_copy

.PHONY : CMakeFiles/deep_copy.dir/build

CMakeFiles/deep_copy.dir/requires: CMakeFiles/deep_copy.dir/main.cpp.o.requires

.PHONY : CMakeFiles/deep_copy.dir/requires

CMakeFiles/deep_copy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/deep_copy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/deep_copy.dir/clean

CMakeFiles/deep_copy.dir/depend:
	cd /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug /Users/jingwen/Documents/ClionProjects/CMPT225/deep_copy/cmake-build-debug/CMakeFiles/deep_copy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/deep_copy.dir/depend

