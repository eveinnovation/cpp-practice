# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/e.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/e.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/e.dir/flags.make

CMakeFiles/e.dir/functions/lotto.cpp.o: CMakeFiles/e.dir/flags.make
CMakeFiles/e.dir/functions/lotto.cpp.o: ../functions/lotto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/e.dir/functions/lotto.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/e.dir/functions/lotto.cpp.o -c /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/functions/lotto.cpp

CMakeFiles/e.dir/functions/lotto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e.dir/functions/lotto.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/functions/lotto.cpp > CMakeFiles/e.dir/functions/lotto.cpp.i

CMakeFiles/e.dir/functions/lotto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e.dir/functions/lotto.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/functions/lotto.cpp -o CMakeFiles/e.dir/functions/lotto.cpp.s

# Object files for target e
e_OBJECTS = \
"CMakeFiles/e.dir/functions/lotto.cpp.o"

# External object files for target e
e_EXTERNAL_OBJECTS =

libe.a: CMakeFiles/e.dir/functions/lotto.cpp.o
libe.a: CMakeFiles/e.dir/build.make
libe.a: CMakeFiles/e.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libe.a"
	$(CMAKE_COMMAND) -P CMakeFiles/e.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/e.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/e.dir/build: libe.a

.PHONY : CMakeFiles/e.dir/build

CMakeFiles/e.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/e.dir/cmake_clean.cmake
.PHONY : CMakeFiles/e.dir/clean

CMakeFiles/e.dir/depend:
	cd /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug /Users/ovidiu/OVIDIU/PROGRAMMING_STUFFS/C++/book-practices/c-examples/cmake-build-debug/CMakeFiles/e.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/e.dir/depend

