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
CMAKE_COMMAND = /Users/cadebrown/programs/homebrew/Cellar/cmake/3.9.6/bin/cmake

# The command to remove a file.
RM = /Users/cadebrown/programs/homebrew/Cellar/cmake/3.9.6/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cadebrown/projects/PGS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cadebrown/projects/PGS

# Include any dependencies generated for this target.
include src/CMakeFiles/src.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/src.dir/flags.make

src/CMakeFiles/src.dir/compute.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/compute.cpp.o: src/compute.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cadebrown/projects/PGS/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/src.dir/compute.cpp.o"
	cd /Users/cadebrown/projects/PGS/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/compute.cpp.o -c /Users/cadebrown/projects/PGS/src/compute.cpp

src/CMakeFiles/src.dir/compute.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/compute.cpp.i"
	cd /Users/cadebrown/projects/PGS/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cadebrown/projects/PGS/src/compute.cpp > CMakeFiles/src.dir/compute.cpp.i

src/CMakeFiles/src.dir/compute.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/compute.cpp.s"
	cd /Users/cadebrown/projects/PGS/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cadebrown/projects/PGS/src/compute.cpp -o CMakeFiles/src.dir/compute.cpp.s

src/CMakeFiles/src.dir/compute.cpp.o.requires:

.PHONY : src/CMakeFiles/src.dir/compute.cpp.o.requires

src/CMakeFiles/src.dir/compute.cpp.o.provides: src/CMakeFiles/src.dir/compute.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/src.dir/build.make src/CMakeFiles/src.dir/compute.cpp.o.provides.build
.PHONY : src/CMakeFiles/src.dir/compute.cpp.o.provides

src/CMakeFiles/src.dir/compute.cpp.o.provides.build: src/CMakeFiles/src.dir/compute.cpp.o


# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/compute.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

src/libsrc.a: src/CMakeFiles/src.dir/compute.cpp.o
src/libsrc.a: src/CMakeFiles/src.dir/build.make
src/libsrc.a: src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cadebrown/projects/PGS/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libsrc.a"
	cd /Users/cadebrown/projects/PGS/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean_target.cmake
	cd /Users/cadebrown/projects/PGS/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/src.dir/build: src/libsrc.a

.PHONY : src/CMakeFiles/src.dir/build

src/CMakeFiles/src.dir/requires: src/CMakeFiles/src.dir/compute.cpp.o.requires

.PHONY : src/CMakeFiles/src.dir/requires

src/CMakeFiles/src.dir/clean:
	cd /Users/cadebrown/projects/PGS/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/src.dir/clean

src/CMakeFiles/src.dir/depend:
	cd /Users/cadebrown/projects/PGS && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cadebrown/projects/PGS /Users/cadebrown/projects/PGS/src /Users/cadebrown/projects/PGS /Users/cadebrown/projects/PGS/src /Users/cadebrown/projects/PGS/src/CMakeFiles/src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/src.dir/depend

