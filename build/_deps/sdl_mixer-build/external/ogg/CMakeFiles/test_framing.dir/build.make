# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build

# Include any dependencies generated for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/flags.make

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/flags.make
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/includes_C.rsp
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj: _deps/sdl_mixer-src/external/ogg/src/framing.c
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj"
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && C:/Strawberry/c/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj -MF CMakeFiles/test_framing.dir/src/framing.c.obj.d -o CMakeFiles/test_framing.dir/src/framing.c.obj -c C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-src/external/ogg/src/framing.c

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_framing.dir/src/framing.c.i"
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && C:/Strawberry/c/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-src/external/ogg/src/framing.c > CMakeFiles/test_framing.dir/src/framing.c.i

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_framing.dir/src/framing.c.s"
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && C:/Strawberry/c/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-src/external/ogg/src/framing.c -o CMakeFiles/test_framing.dir/src/framing.c.s

# Object files for target test_framing
test_framing_OBJECTS = \
"CMakeFiles/test_framing.dir/src/framing.c.obj"

# External object files for target test_framing
test_framing_EXTERNAL_OBJECTS =

_deps/sdl_mixer-build/external/ogg/test_framing.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/src/framing.c.obj
_deps/sdl_mixer-build/external/ogg/test_framing.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/build.make
_deps/sdl_mixer-build/external/ogg/test_framing.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/linkLibs.rsp
_deps/sdl_mixer-build/external/ogg/test_framing.exe: _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_framing.exe"
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && "C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/test_framing.dir/objects.a
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && C:/Strawberry/c/bin/ar.exe qc CMakeFiles/test_framing.dir/objects.a @CMakeFiles/test_framing.dir/objects1.rsp
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && C:/Strawberry/c/bin/gcc.exe  -fstack-protector -Wl,--whole-archive CMakeFiles/test_framing.dir/objects.a -Wl,--no-whole-archive -o test_framing.exe -Wl,--out-implib,libtest_framing.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/test_framing.dir/linkLibs.rsp

# Rule to build all files generated by this target.
_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/build: _deps/sdl_mixer-build/external/ogg/test_framing.exe
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/build

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/clean:
	cd C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg && $(CMAKE_COMMAND) -P CMakeFiles/test_framing.dir/cmake_clean.cmake
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/clean

_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-src/external/ogg C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg C:/Users/Pakistani/Desktop/C224/folder1/CS224-HW3-Fall2023/HUMania/build/_deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/sdl_mixer-build/external/ogg/CMakeFiles/test_framing.dir/depend
