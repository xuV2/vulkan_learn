# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = D:\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\vulkan_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\vulkan_learn\build

# Include any dependencies generated for this target.
include CMakeFiles/VulkanApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/VulkanApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/VulkanApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VulkanApp.dir/flags.make

CMakeFiles/VulkanApp.dir/src/main.cpp.obj: CMakeFiles/VulkanApp.dir/flags.make
CMakeFiles/VulkanApp.dir/src/main.cpp.obj: CMakeFiles/VulkanApp.dir/includes_CXX.rsp
CMakeFiles/VulkanApp.dir/src/main.cpp.obj: D:/vulkan_learn/src/main.cpp
CMakeFiles/VulkanApp.dir/src/main.cpp.obj: CMakeFiles/VulkanApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\vulkan_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VulkanApp.dir/src/main.cpp.obj"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VulkanApp.dir/src/main.cpp.obj -MF CMakeFiles\VulkanApp.dir\src\main.cpp.obj.d -o CMakeFiles\VulkanApp.dir\src\main.cpp.obj -c D:\vulkan_learn\src\main.cpp

CMakeFiles/VulkanApp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VulkanApp.dir/src/main.cpp.i"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\vulkan_learn\src\main.cpp > CMakeFiles\VulkanApp.dir\src\main.cpp.i

CMakeFiles/VulkanApp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VulkanApp.dir/src/main.cpp.s"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\vulkan_learn\src\main.cpp -o CMakeFiles\VulkanApp.dir\src\main.cpp.s

CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj: CMakeFiles/VulkanApp.dir/flags.make
CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj: CMakeFiles/VulkanApp.dir/includes_CXX.rsp
CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj: D:/vulkan_learn/src/xy_window.cpp
CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj: CMakeFiles/VulkanApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\vulkan_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj -MF CMakeFiles\VulkanApp.dir\src\xy_window.cpp.obj.d -o CMakeFiles\VulkanApp.dir\src\xy_window.cpp.obj -c D:\vulkan_learn\src\xy_window.cpp

CMakeFiles/VulkanApp.dir/src/xy_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VulkanApp.dir/src/xy_window.cpp.i"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\vulkan_learn\src\xy_window.cpp > CMakeFiles\VulkanApp.dir\src\xy_window.cpp.i

CMakeFiles/VulkanApp.dir/src/xy_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VulkanApp.dir/src/xy_window.cpp.s"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\vulkan_learn\src\xy_window.cpp -o CMakeFiles\VulkanApp.dir\src\xy_window.cpp.s

CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj: CMakeFiles/VulkanApp.dir/flags.make
CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj: CMakeFiles/VulkanApp.dir/includes_CXX.rsp
CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj: D:/vulkan_learn/src/first_app.cpp
CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj: CMakeFiles/VulkanApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\vulkan_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj -MF CMakeFiles\VulkanApp.dir\src\first_app.cpp.obj.d -o CMakeFiles\VulkanApp.dir\src\first_app.cpp.obj -c D:\vulkan_learn\src\first_app.cpp

CMakeFiles/VulkanApp.dir/src/first_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VulkanApp.dir/src/first_app.cpp.i"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\vulkan_learn\src\first_app.cpp > CMakeFiles\VulkanApp.dir\src\first_app.cpp.i

CMakeFiles/VulkanApp.dir/src/first_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VulkanApp.dir/src/first_app.cpp.s"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\vulkan_learn\src\first_app.cpp -o CMakeFiles\VulkanApp.dir\src\first_app.cpp.s

CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj: CMakeFiles/VulkanApp.dir/flags.make
CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj: CMakeFiles/VulkanApp.dir/includes_CXX.rsp
CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj: D:/vulkan_learn/src/xy_pipeline.cpp
CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj: CMakeFiles/VulkanApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\vulkan_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj -MF CMakeFiles\VulkanApp.dir\src\xy_pipeline.cpp.obj.d -o CMakeFiles\VulkanApp.dir\src\xy_pipeline.cpp.obj -c D:\vulkan_learn\src\xy_pipeline.cpp

CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.i"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\vulkan_learn\src\xy_pipeline.cpp > CMakeFiles\VulkanApp.dir\src\xy_pipeline.cpp.i

CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.s"
	D:\minGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\vulkan_learn\src\xy_pipeline.cpp -o CMakeFiles\VulkanApp.dir\src\xy_pipeline.cpp.s

# Object files for target VulkanApp
VulkanApp_OBJECTS = \
"CMakeFiles/VulkanApp.dir/src/main.cpp.obj" \
"CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj" \
"CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj" \
"CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj"

# External object files for target VulkanApp
VulkanApp_EXTERNAL_OBJECTS =

VulkanApp.exe: CMakeFiles/VulkanApp.dir/src/main.cpp.obj
VulkanApp.exe: CMakeFiles/VulkanApp.dir/src/xy_window.cpp.obj
VulkanApp.exe: CMakeFiles/VulkanApp.dir/src/first_app.cpp.obj
VulkanApp.exe: CMakeFiles/VulkanApp.dir/src/xy_pipeline.cpp.obj
VulkanApp.exe: CMakeFiles/VulkanApp.dir/build.make
VulkanApp.exe: CMakeFiles/VulkanApp.dir/linkLibs.rsp
VulkanApp.exe: CMakeFiles/VulkanApp.dir/objects1.rsp
VulkanApp.exe: CMakeFiles/VulkanApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\vulkan_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable VulkanApp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\VulkanApp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VulkanApp.dir/build: VulkanApp.exe
.PHONY : CMakeFiles/VulkanApp.dir/build

CMakeFiles/VulkanApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\VulkanApp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/VulkanApp.dir/clean

CMakeFiles/VulkanApp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\vulkan_learn D:\vulkan_learn D:\vulkan_learn\build D:\vulkan_learn\build D:\vulkan_learn\build\CMakeFiles\VulkanApp.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/VulkanApp.dir/depend

