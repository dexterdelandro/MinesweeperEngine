# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = C:\msys64\ucrt64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\ucrt64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\msys64\home\dexterdelandro\SDL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\msys64\home\dexterdelandro\build

# Include any dependencies generated for this target.
include CMakeFiles/SDL3_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SDL3_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SDL3_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SDL3_test.dir/flags.make

CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_assert.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_assert.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_assert.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_assert.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_assert.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_assert.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_assert.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_assert.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_common.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_common.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_common.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_common.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_common.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_common.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_common.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_common.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_compare.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_compare.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_compare.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_compare.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_compare.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_compare.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_compare.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_compare.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_crc32.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_crc32.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_crc32.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_crc32.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_crc32.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_crc32.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_crc32.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_crc32.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_font.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_font.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_font.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_font.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_font.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_font.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_font.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_font.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_fuzzer.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_fuzzer.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_fuzzer.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_fuzzer.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_fuzzer.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_fuzzer.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_fuzzer.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_fuzzer.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_harness.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_harness.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_harness.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_harness.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_harness.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_harness.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_harness.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_harness.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_log.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_log.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_log.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_log.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_log.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_log.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_log.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_log.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_md5.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_md5.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_md5.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_md5.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_md5.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_md5.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_md5.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_md5.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_memory.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_memory.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_memory.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_memory.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_memory.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_memory.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_memory.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_memory.c.s

CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj: CMakeFiles/SDL3_test.dir/flags.make
CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj: CMakeFiles/SDL3_test.dir/includes_C.rsp
CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj: C:/msys64/home/dexterdelandro/SDL/src/test/SDL_test_random.c
CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj: CMakeFiles/SDL3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj -MF CMakeFiles\SDL3_test.dir\src\test\SDL_test_random.c.obj.d -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_random.c.obj -c C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_random.c

CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.i"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_random.c > CMakeFiles\SDL3_test.dir\src\test\SDL_test_random.c.i

CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.s"
	C:\msys64\ucrt64\bin\cc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\msys64\home\dexterdelandro\SDL\src\test\SDL_test_random.c -o CMakeFiles\SDL3_test.dir\src\test\SDL_test_random.c.s

# Object files for target SDL3_test
SDL3_test_OBJECTS = \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj" \
"CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj"

# External object files for target SDL3_test
SDL3_test_EXTERNAL_OBJECTS =

libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_assert.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_common.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_compare.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_crc32.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_font.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_fuzzer.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_harness.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_log.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_md5.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_memory.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/src/test/SDL_test_random.c.obj
libSDL3_test.a: CMakeFiles/SDL3_test.dir/build.make
libSDL3_test.a: CMakeFiles/SDL3_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\msys64\home\dexterdelandro\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C static library libSDL3_test.a"
	$(CMAKE_COMMAND) -P CMakeFiles\SDL3_test.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SDL3_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SDL3_test.dir/build: libSDL3_test.a
.PHONY : CMakeFiles/SDL3_test.dir/build

CMakeFiles/SDL3_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SDL3_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SDL3_test.dir/clean

CMakeFiles/SDL3_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\msys64\home\dexterdelandro\SDL C:\msys64\home\dexterdelandro\SDL C:\msys64\home\dexterdelandro\build C:\msys64\home\dexterdelandro\build C:\msys64\home\dexterdelandro\build\CMakeFiles\SDL3_test.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SDL3_test.dir/depend

