# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/share/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/share/catkin_ws/build

# Include any dependencies generated for this target.
include tum_ardrone/CMakeFiles/drone_gui.dir/depend.make

# Include the progress variables for this target.
include tum_ardrone/CMakeFiles/drone_gui.dir/progress.make

# Include the compile flags for this target's objects.
include tum_ardrone/CMakeFiles/drone_gui.dir/flags.make

tum_ardrone/ui_tum_ardrone_gui.h: /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_tum_ardrone_gui.h"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /root/share/catkin_ws/build/tum_ardrone/ui_tum_ardrone_gui.h /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.ui

tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx: /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.h
tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx: tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating src/UINode/moc_tum_ardrone_gui.cxx"
	cd /root/share/catkin_ws/build/tum_ardrone/src/UINode && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx_parameters

tum_ardrone/src/UINode/moc_RosThread.cxx: /root/share/catkin_ws/src/tum_ardrone/src/UINode/RosThread.h
tum_ardrone/src/UINode/moc_RosThread.cxx: tum_ardrone/src/UINode/moc_RosThread.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating src/UINode/moc_RosThread.cxx"
	cd /root/share/catkin_ws/build/tum_ardrone/src/UINode && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_RosThread.cxx_parameters

tum_ardrone/src/UINode/moc_PingThread.cxx: /root/share/catkin_ws/src/tum_ardrone/src/UINode/PingThread.h
tum_ardrone/src/UINode/moc_PingThread.cxx: tum_ardrone/src/UINode/moc_PingThread.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating src/UINode/moc_PingThread.cxx"
	cd /root/share/catkin_ws/build/tum_ardrone/src/UINode && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_PingThread.cxx_parameters

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o: /root/share/catkin_ws/src/tum_ardrone/src/UINode/main_GUI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o -c /root/share/catkin_ws/src/tum_ardrone/src/UINode/main_GUI.cpp

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/src/tum_ardrone/src/UINode/main_GUI.cpp > CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/src/tum_ardrone/src/UINode/main_GUI.cpp -o CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o


tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o: /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o -c /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.cpp

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.cpp > CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/src/tum_ardrone/src/UINode/tum_ardrone_gui.cpp -o CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o


tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o: /root/share/catkin_ws/src/tum_ardrone/src/UINode/RosThread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o -c /root/share/catkin_ws/src/tum_ardrone/src/UINode/RosThread.cpp

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/src/tum_ardrone/src/UINode/RosThread.cpp > CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/src/tum_ardrone/src/UINode/RosThread.cpp -o CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o


tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o: /root/share/catkin_ws/src/tum_ardrone/src/UINode/PingThread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o -c /root/share/catkin_ws/src/tum_ardrone/src/UINode/PingThread.cpp

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/src/tum_ardrone/src/UINode/PingThread.cpp > CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/src/tum_ardrone/src/UINode/PingThread.cpp -o CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o


tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o: tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o -c /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx > CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx -o CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o


tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o: tum_ardrone/src/UINode/moc_RosThread.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o -c /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_RosThread.cxx

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_RosThread.cxx > CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_RosThread.cxx -o CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o


tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o: tum_ardrone/CMakeFiles/drone_gui.dir/flags.make
tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o: tum_ardrone/src/UINode/moc_PingThread.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o -c /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_PingThread.cxx

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.i"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_PingThread.cxx > CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.i

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.s"
	cd /root/share/catkin_ws/build/tum_ardrone && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/share/catkin_ws/build/tum_ardrone/src/UINode/moc_PingThread.cxx -o CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.s

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.requires:

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.requires

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.provides: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.requires
	$(MAKE) -f tum_ardrone/CMakeFiles/drone_gui.dir/build.make tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.provides.build
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.provides

tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.provides.build: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o


# Object files for target drone_gui
drone_gui_OBJECTS = \
"CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o" \
"CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o" \
"CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o" \
"CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o" \
"CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o" \
"CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o" \
"CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o"

# External object files for target drone_gui
drone_gui_EXTERNAL_OBJECTS =

/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/build.make
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libQtGui.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libQtCore.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libimage_transport.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libclass_loader.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/libPocoFoundation.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libdl.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libroslib.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/librospack.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libtf.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libtf2_ros.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libactionlib.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libmessage_filters.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libtf2.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libcamera_info_manager.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libcamera_calibration_parsers.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libcv_bridge.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libdynamic_reconfigure_config_init_mutex.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libroscpp.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/librosconsole.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libroscpp_serialization.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libxmlrpcpp.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/librostime.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /opt/ros/kinetic/lib/libcpp_common.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_system.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libpthread.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui: tum_ardrone/CMakeFiles/drone_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/share/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable /root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui"
	cd /root/share/catkin_ws/build/tum_ardrone && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drone_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tum_ardrone/CMakeFiles/drone_gui.dir/build: /root/share/catkin_ws/devel/lib/tum_ardrone/drone_gui

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/build

tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/main_GUI.cpp.o.requires
tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/tum_ardrone_gui.cpp.o.requires
tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/RosThread.cpp.o.requires
tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/PingThread.cpp.o.requires
tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_tum_ardrone_gui.cxx.o.requires
tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_RosThread.cxx.o.requires
tum_ardrone/CMakeFiles/drone_gui.dir/requires: tum_ardrone/CMakeFiles/drone_gui.dir/src/UINode/moc_PingThread.cxx.o.requires

.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/requires

tum_ardrone/CMakeFiles/drone_gui.dir/clean:
	cd /root/share/catkin_ws/build/tum_ardrone && $(CMAKE_COMMAND) -P CMakeFiles/drone_gui.dir/cmake_clean.cmake
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/clean

tum_ardrone/CMakeFiles/drone_gui.dir/depend: tum_ardrone/ui_tum_ardrone_gui.h
tum_ardrone/CMakeFiles/drone_gui.dir/depend: tum_ardrone/src/UINode/moc_tum_ardrone_gui.cxx
tum_ardrone/CMakeFiles/drone_gui.dir/depend: tum_ardrone/src/UINode/moc_RosThread.cxx
tum_ardrone/CMakeFiles/drone_gui.dir/depend: tum_ardrone/src/UINode/moc_PingThread.cxx
	cd /root/share/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/share/catkin_ws/src /root/share/catkin_ws/src/tum_ardrone /root/share/catkin_ws/build /root/share/catkin_ws/build/tum_ardrone /root/share/catkin_ws/build/tum_ardrone/CMakeFiles/drone_gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tum_ardrone/CMakeFiles/drone_gui.dir/depend

