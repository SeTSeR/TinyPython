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
include scanner/CMakeFiles/scanner.dir/depend.make

# Include the progress variables for this target.
include scanner/CMakeFiles/scanner.dir/progress.make

# Include the compile flags for this target's objects.
include scanner/CMakeFiles/scanner.dir/flags.make

scanner/CMakeFiles/scanner.dir/base.cxx.o: scanner/CMakeFiles/scanner.dir/flags.make
scanner/CMakeFiles/scanner.dir/base.cxx.o: /home/setser/Tiny/src/scanner/base.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object scanner/CMakeFiles/scanner.dir/base.cxx.o"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/scanner.dir/base.cxx.o -c /home/setser/Tiny/src/scanner/base.cxx

scanner/CMakeFiles/scanner.dir/base.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/base.cxx.i"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/scanner/base.cxx > CMakeFiles/scanner.dir/base.cxx.i

scanner/CMakeFiles/scanner.dir/base.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/base.cxx.s"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/scanner/base.cxx -o CMakeFiles/scanner.dir/base.cxx.s

scanner/CMakeFiles/scanner.dir/base.cxx.o.requires:
.PHONY : scanner/CMakeFiles/scanner.dir/base.cxx.o.requires

scanner/CMakeFiles/scanner.dir/base.cxx.o.provides: scanner/CMakeFiles/scanner.dir/base.cxx.o.requires
	$(MAKE) -f scanner/CMakeFiles/scanner.dir/build.make scanner/CMakeFiles/scanner.dir/base.cxx.o.provides.build
.PHONY : scanner/CMakeFiles/scanner.dir/base.cxx.o.provides

scanner/CMakeFiles/scanner.dir/base.cxx.o.provides.build: scanner/CMakeFiles/scanner.dir/base.cxx.o

scanner/CMakeFiles/scanner.dir/token.cxx.o: scanner/CMakeFiles/scanner.dir/flags.make
scanner/CMakeFiles/scanner.dir/token.cxx.o: /home/setser/Tiny/src/scanner/token.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object scanner/CMakeFiles/scanner.dir/token.cxx.o"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/scanner.dir/token.cxx.o -c /home/setser/Tiny/src/scanner/token.cxx

scanner/CMakeFiles/scanner.dir/token.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/token.cxx.i"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/scanner/token.cxx > CMakeFiles/scanner.dir/token.cxx.i

scanner/CMakeFiles/scanner.dir/token.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/token.cxx.s"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/scanner/token.cxx -o CMakeFiles/scanner.dir/token.cxx.s

scanner/CMakeFiles/scanner.dir/token.cxx.o.requires:
.PHONY : scanner/CMakeFiles/scanner.dir/token.cxx.o.requires

scanner/CMakeFiles/scanner.dir/token.cxx.o.provides: scanner/CMakeFiles/scanner.dir/token.cxx.o.requires
	$(MAKE) -f scanner/CMakeFiles/scanner.dir/build.make scanner/CMakeFiles/scanner.dir/token.cxx.o.provides.build
.PHONY : scanner/CMakeFiles/scanner.dir/token.cxx.o.provides

scanner/CMakeFiles/scanner.dir/token.cxx.o.provides.build: scanner/CMakeFiles/scanner.dir/token.cxx.o

scanner/CMakeFiles/scanner.dir/number.cxx.o: scanner/CMakeFiles/scanner.dir/flags.make
scanner/CMakeFiles/scanner.dir/number.cxx.o: /home/setser/Tiny/src/scanner/number.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object scanner/CMakeFiles/scanner.dir/number.cxx.o"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/scanner.dir/number.cxx.o -c /home/setser/Tiny/src/scanner/number.cxx

scanner/CMakeFiles/scanner.dir/number.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/number.cxx.i"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/scanner/number.cxx > CMakeFiles/scanner.dir/number.cxx.i

scanner/CMakeFiles/scanner.dir/number.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/number.cxx.s"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/scanner/number.cxx -o CMakeFiles/scanner.dir/number.cxx.s

scanner/CMakeFiles/scanner.dir/number.cxx.o.requires:
.PHONY : scanner/CMakeFiles/scanner.dir/number.cxx.o.requires

scanner/CMakeFiles/scanner.dir/number.cxx.o.provides: scanner/CMakeFiles/scanner.dir/number.cxx.o.requires
	$(MAKE) -f scanner/CMakeFiles/scanner.dir/build.make scanner/CMakeFiles/scanner.dir/number.cxx.o.provides.build
.PHONY : scanner/CMakeFiles/scanner.dir/number.cxx.o.provides

scanner/CMakeFiles/scanner.dir/number.cxx.o.provides.build: scanner/CMakeFiles/scanner.dir/number.cxx.o

scanner/CMakeFiles/scanner.dir/identifier.cxx.o: scanner/CMakeFiles/scanner.dir/flags.make
scanner/CMakeFiles/scanner.dir/identifier.cxx.o: /home/setser/Tiny/src/scanner/identifier.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object scanner/CMakeFiles/scanner.dir/identifier.cxx.o"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/scanner.dir/identifier.cxx.o -c /home/setser/Tiny/src/scanner/identifier.cxx

scanner/CMakeFiles/scanner.dir/identifier.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/identifier.cxx.i"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/scanner/identifier.cxx > CMakeFiles/scanner.dir/identifier.cxx.i

scanner/CMakeFiles/scanner.dir/identifier.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/identifier.cxx.s"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/scanner/identifier.cxx -o CMakeFiles/scanner.dir/identifier.cxx.s

scanner/CMakeFiles/scanner.dir/identifier.cxx.o.requires:
.PHONY : scanner/CMakeFiles/scanner.dir/identifier.cxx.o.requires

scanner/CMakeFiles/scanner.dir/identifier.cxx.o.provides: scanner/CMakeFiles/scanner.dir/identifier.cxx.o.requires
	$(MAKE) -f scanner/CMakeFiles/scanner.dir/build.make scanner/CMakeFiles/scanner.dir/identifier.cxx.o.provides.build
.PHONY : scanner/CMakeFiles/scanner.dir/identifier.cxx.o.provides

scanner/CMakeFiles/scanner.dir/identifier.cxx.o.provides.build: scanner/CMakeFiles/scanner.dir/identifier.cxx.o

scanner/CMakeFiles/scanner.dir/operator.cxx.o: scanner/CMakeFiles/scanner.dir/flags.make
scanner/CMakeFiles/scanner.dir/operator.cxx.o: /home/setser/Tiny/src/scanner/operator.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object scanner/CMakeFiles/scanner.dir/operator.cxx.o"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/scanner.dir/operator.cxx.o -c /home/setser/Tiny/src/scanner/operator.cxx

scanner/CMakeFiles/scanner.dir/operator.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/operator.cxx.i"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/scanner/operator.cxx > CMakeFiles/scanner.dir/operator.cxx.i

scanner/CMakeFiles/scanner.dir/operator.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/operator.cxx.s"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/scanner/operator.cxx -o CMakeFiles/scanner.dir/operator.cxx.s

scanner/CMakeFiles/scanner.dir/operator.cxx.o.requires:
.PHONY : scanner/CMakeFiles/scanner.dir/operator.cxx.o.requires

scanner/CMakeFiles/scanner.dir/operator.cxx.o.provides: scanner/CMakeFiles/scanner.dir/operator.cxx.o.requires
	$(MAKE) -f scanner/CMakeFiles/scanner.dir/build.make scanner/CMakeFiles/scanner.dir/operator.cxx.o.provides.build
.PHONY : scanner/CMakeFiles/scanner.dir/operator.cxx.o.provides

scanner/CMakeFiles/scanner.dir/operator.cxx.o.provides.build: scanner/CMakeFiles/scanner.dir/operator.cxx.o

scanner/CMakeFiles/scanner.dir/white.cxx.o: scanner/CMakeFiles/scanner.dir/flags.make
scanner/CMakeFiles/scanner.dir/white.cxx.o: /home/setser/Tiny/src/scanner/white.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/setser/Tiny/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object scanner/CMakeFiles/scanner.dir/white.cxx.o"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/scanner.dir/white.cxx.o -c /home/setser/Tiny/src/scanner/white.cxx

scanner/CMakeFiles/scanner.dir/white.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scanner.dir/white.cxx.i"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/setser/Tiny/src/scanner/white.cxx > CMakeFiles/scanner.dir/white.cxx.i

scanner/CMakeFiles/scanner.dir/white.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scanner.dir/white.cxx.s"
	cd /home/setser/Tiny/build/scanner && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/setser/Tiny/src/scanner/white.cxx -o CMakeFiles/scanner.dir/white.cxx.s

scanner/CMakeFiles/scanner.dir/white.cxx.o.requires:
.PHONY : scanner/CMakeFiles/scanner.dir/white.cxx.o.requires

scanner/CMakeFiles/scanner.dir/white.cxx.o.provides: scanner/CMakeFiles/scanner.dir/white.cxx.o.requires
	$(MAKE) -f scanner/CMakeFiles/scanner.dir/build.make scanner/CMakeFiles/scanner.dir/white.cxx.o.provides.build
.PHONY : scanner/CMakeFiles/scanner.dir/white.cxx.o.provides

scanner/CMakeFiles/scanner.dir/white.cxx.o.provides.build: scanner/CMakeFiles/scanner.dir/white.cxx.o

# Object files for target scanner
scanner_OBJECTS = \
"CMakeFiles/scanner.dir/base.cxx.o" \
"CMakeFiles/scanner.dir/token.cxx.o" \
"CMakeFiles/scanner.dir/number.cxx.o" \
"CMakeFiles/scanner.dir/identifier.cxx.o" \
"CMakeFiles/scanner.dir/operator.cxx.o" \
"CMakeFiles/scanner.dir/white.cxx.o"

# External object files for target scanner
scanner_EXTERNAL_OBJECTS =

scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/base.cxx.o
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/token.cxx.o
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/number.cxx.o
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/identifier.cxx.o
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/operator.cxx.o
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/white.cxx.o
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/build.make
scanner/libscanner.so: scanner/CMakeFiles/scanner.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libscanner.so"
	cd /home/setser/Tiny/build/scanner && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scanner.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
scanner/CMakeFiles/scanner.dir/build: scanner/libscanner.so
.PHONY : scanner/CMakeFiles/scanner.dir/build

scanner/CMakeFiles/scanner.dir/requires: scanner/CMakeFiles/scanner.dir/base.cxx.o.requires
scanner/CMakeFiles/scanner.dir/requires: scanner/CMakeFiles/scanner.dir/token.cxx.o.requires
scanner/CMakeFiles/scanner.dir/requires: scanner/CMakeFiles/scanner.dir/number.cxx.o.requires
scanner/CMakeFiles/scanner.dir/requires: scanner/CMakeFiles/scanner.dir/identifier.cxx.o.requires
scanner/CMakeFiles/scanner.dir/requires: scanner/CMakeFiles/scanner.dir/operator.cxx.o.requires
scanner/CMakeFiles/scanner.dir/requires: scanner/CMakeFiles/scanner.dir/white.cxx.o.requires
.PHONY : scanner/CMakeFiles/scanner.dir/requires

scanner/CMakeFiles/scanner.dir/clean:
	cd /home/setser/Tiny/build/scanner && $(CMAKE_COMMAND) -P CMakeFiles/scanner.dir/cmake_clean.cmake
.PHONY : scanner/CMakeFiles/scanner.dir/clean

scanner/CMakeFiles/scanner.dir/depend:
	cd /home/setser/Tiny/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/setser/Tiny/src /home/setser/Tiny/src/scanner /home/setser/Tiny/build /home/setser/Tiny/build/scanner /home/setser/Tiny/build/scanner/CMakeFiles/scanner.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : scanner/CMakeFiles/scanner.dir/depend

