# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/setser/Tiny/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/setser/Tiny/build

# Include any dependencies generated for this target.
include CMakeFiles/interpreter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/interpreter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/interpreter.dir/flags.make

CMakeFiles/interpreter.dir/main.o: CMakeFiles/interpreter.dir/flags.make
CMakeFiles/interpreter.dir/main.o: /home/setser/Tiny/src/main.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/interpreter.dir/main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/interpreter.dir/main.o -c /home/setser/Tiny/src/main.cxx

CMakeFiles/interpreter.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interpreter.dir/main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/main.cxx > CMakeFiles/interpreter.dir/main.i

CMakeFiles/interpreter.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interpreter.dir/main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/main.cxx -o CMakeFiles/interpreter.dir/main.s

CMakeFiles/interpreter.dir/main.o.requires:
.PHONY : CMakeFiles/interpreter.dir/main.o.requires

CMakeFiles/interpreter.dir/main.o.provides: CMakeFiles/interpreter.dir/main.o.requires
	$(MAKE) -f CMakeFiles/interpreter.dir/build.make CMakeFiles/interpreter.dir/main.o.provides.build
.PHONY : CMakeFiles/interpreter.dir/main.o.provides

CMakeFiles/interpreter.dir/main.o.provides.build: CMakeFiles/interpreter.dir/main.o

CMakeFiles/interpreter.dir/input.o: CMakeFiles/interpreter.dir/flags.make
CMakeFiles/interpreter.dir/input.o: /home/setser/Tiny/src/input.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/interpreter.dir/input.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/interpreter.dir/input.o -c /home/setser/Tiny/src/input.cxx

CMakeFiles/interpreter.dir/input.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interpreter.dir/input.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/input.cxx > CMakeFiles/interpreter.dir/input.i

CMakeFiles/interpreter.dir/input.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interpreter.dir/input.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/input.cxx -o CMakeFiles/interpreter.dir/input.s

CMakeFiles/interpreter.dir/input.o.requires:
.PHONY : CMakeFiles/interpreter.dir/input.o.requires

CMakeFiles/interpreter.dir/input.o.provides: CMakeFiles/interpreter.dir/input.o.requires
	$(MAKE) -f CMakeFiles/interpreter.dir/build.make CMakeFiles/interpreter.dir/input.o.provides.build
.PHONY : CMakeFiles/interpreter.dir/input.o.provides

CMakeFiles/interpreter.dir/input.o.provides.build: CMakeFiles/interpreter.dir/input.o

CMakeFiles/interpreter.dir/errors.o: CMakeFiles/interpreter.dir/flags.make
CMakeFiles/interpreter.dir/errors.o: /home/setser/Tiny/src/errors.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/interpreter.dir/errors.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/interpreter.dir/errors.o -c /home/setser/Tiny/src/errors.cxx

CMakeFiles/interpreter.dir/errors.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/interpreter.dir/errors.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/errors.cxx > CMakeFiles/interpreter.dir/errors.i

CMakeFiles/interpreter.dir/errors.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/interpreter.dir/errors.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/errors.cxx -o CMakeFiles/interpreter.dir/errors.s

CMakeFiles/interpreter.dir/errors.o.requires:
.PHONY : CMakeFiles/interpreter.dir/errors.o.requires

CMakeFiles/interpreter.dir/errors.o.provides: CMakeFiles/interpreter.dir/errors.o.requires
	$(MAKE) -f CMakeFiles/interpreter.dir/build.make CMakeFiles/interpreter.dir/errors.o.provides.build
.PHONY : CMakeFiles/interpreter.dir/errors.o.provides

CMakeFiles/interpreter.dir/errors.o.provides.build: CMakeFiles/interpreter.dir/errors.o

# Object files for target interpreter
interpreter_OBJECTS = \
"CMakeFiles/interpreter.dir/main.o" \
"CMakeFiles/interpreter.dir/input.o" \
"CMakeFiles/interpreter.dir/errors.o"

# External object files for target interpreter
interpreter_EXTERNAL_OBJECTS =

interpreter: CMakeFiles/interpreter.dir/main.o
interpreter: CMakeFiles/interpreter.dir/input.o
interpreter: CMakeFiles/interpreter.dir/errors.o
interpreter: CMakeFiles/interpreter.dir/build.make
interpreter: scanner/libscanner.so
interpreter: parser/libparser.so
interpreter: semantic/libsemantic.so
interpreter: CMakeFiles/interpreter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable interpreter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/interpreter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/interpreter.dir/build: interpreter
.PHONY : CMakeFiles/interpreter.dir/build

CMakeFiles/interpreter.dir/requires: CMakeFiles/interpreter.dir/main.o.requires
CMakeFiles/interpreter.dir/requires: CMakeFiles/interpreter.dir/input.o.requires
CMakeFiles/interpreter.dir/requires: CMakeFiles/interpreter.dir/errors.o.requires
.PHONY : CMakeFiles/interpreter.dir/requires

CMakeFiles/interpreter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/interpreter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/interpreter.dir/clean

CMakeFiles/interpreter.dir/depend:
	cd /home/setser/Tiny/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/setser/Tiny/src /home/setser/Tiny/src /home/setser/Tiny/build /home/setser/Tiny/build /home/setser/Tiny/build/CMakeFiles/interpreter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/interpreter.dir/depend

