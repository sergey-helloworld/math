# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/sergey/projects/Math

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sergey/projects/Math

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sergey/projects/Math/CMakeFiles /home/sergey/projects/Math/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sergey/projects/Math/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -P /home/sergey/projects/Math/CMakeFiles/VerifyGlobs.cmake
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Math

# Build rule for target.
Math: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Math
.PHONY : Math

# fast build rule for target.
Math/fast:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/build
.PHONY : Math/fast

BasicNumber.o: BasicNumber.cpp.o

.PHONY : BasicNumber.o

# target to build an object file
BasicNumber.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/BasicNumber.cpp.o
.PHONY : BasicNumber.cpp.o

BasicNumber.i: BasicNumber.cpp.i

.PHONY : BasicNumber.i

# target to preprocess a source file
BasicNumber.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/BasicNumber.cpp.i
.PHONY : BasicNumber.cpp.i

BasicNumber.s: BasicNumber.cpp.s

.PHONY : BasicNumber.s

# target to generate assembly for a file
BasicNumber.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/BasicNumber.cpp.s
.PHONY : BasicNumber.cpp.s

CliCommandParser.o: CliCommandParser.cpp.o

.PHONY : CliCommandParser.o

# target to build an object file
CliCommandParser.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/CliCommandParser.cpp.o
.PHONY : CliCommandParser.cpp.o

CliCommandParser.i: CliCommandParser.cpp.i

.PHONY : CliCommandParser.i

# target to preprocess a source file
CliCommandParser.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/CliCommandParser.cpp.i
.PHONY : CliCommandParser.cpp.i

CliCommandParser.s: CliCommandParser.cpp.s

.PHONY : CliCommandParser.s

# target to generate assembly for a file
CliCommandParser.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/CliCommandParser.cpp.s
.PHONY : CliCommandParser.cpp.s

Command.o: Command.cpp.o

.PHONY : Command.o

# target to build an object file
Command.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Command.cpp.o
.PHONY : Command.cpp.o

Command.i: Command.cpp.i

.PHONY : Command.i

# target to preprocess a source file
Command.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Command.cpp.i
.PHONY : Command.cpp.i

Command.s: Command.cpp.s

.PHONY : Command.s

# target to generate assembly for a file
Command.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Command.cpp.s
.PHONY : Command.cpp.s

CommandFactory.o: CommandFactory.cpp.o

.PHONY : CommandFactory.o

# target to build an object file
CommandFactory.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/CommandFactory.cpp.o
.PHONY : CommandFactory.cpp.o

CommandFactory.i: CommandFactory.cpp.i

.PHONY : CommandFactory.i

# target to preprocess a source file
CommandFactory.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/CommandFactory.cpp.i
.PHONY : CommandFactory.cpp.i

CommandFactory.s: CommandFactory.cpp.s

.PHONY : CommandFactory.s

# target to generate assembly for a file
CommandFactory.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/CommandFactory.cpp.s
.PHONY : CommandFactory.cpp.s

Equation.o: Equation.cpp.o

.PHONY : Equation.o

# target to build an object file
Equation.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Equation.cpp.o
.PHONY : Equation.cpp.o

Equation.i: Equation.cpp.i

.PHONY : Equation.i

# target to preprocess a source file
Equation.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Equation.cpp.i
.PHONY : Equation.cpp.i

Equation.s: Equation.cpp.s

.PHONY : Equation.s

# target to generate assembly for a file
Equation.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Equation.cpp.s
.PHONY : Equation.cpp.s

Math.o: Math.cpp.o

.PHONY : Math.o

# target to build an object file
Math.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Math.cpp.o
.PHONY : Math.cpp.o

Math.i: Math.cpp.i

.PHONY : Math.i

# target to preprocess a source file
Math.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Math.cpp.i
.PHONY : Math.cpp.i

Math.s: Math.cpp.s

.PHONY : Math.s

# target to generate assembly for a file
Math.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Math.cpp.s
.PHONY : Math.cpp.s

MathCommand.o: MathCommand.cpp.o

.PHONY : MathCommand.o

# target to build an object file
MathCommand.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathCommand.cpp.o
.PHONY : MathCommand.cpp.o

MathCommand.i: MathCommand.cpp.i

.PHONY : MathCommand.i

# target to preprocess a source file
MathCommand.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathCommand.cpp.i
.PHONY : MathCommand.cpp.i

MathCommand.s: MathCommand.cpp.s

.PHONY : MathCommand.s

# target to generate assembly for a file
MathCommand.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathCommand.cpp.s
.PHONY : MathCommand.cpp.s

MathMain.o: MathMain.cpp.o

.PHONY : MathMain.o

# target to build an object file
MathMain.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathMain.cpp.o
.PHONY : MathMain.cpp.o

MathMain.i: MathMain.cpp.i

.PHONY : MathMain.i

# target to preprocess a source file
MathMain.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathMain.cpp.i
.PHONY : MathMain.cpp.i

MathMain.s: MathMain.cpp.s

.PHONY : MathMain.s

# target to generate assembly for a file
MathMain.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathMain.cpp.s
.PHONY : MathMain.cpp.s

MathObject.o: MathObject.cpp.o

.PHONY : MathObject.o

# target to build an object file
MathObject.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathObject.cpp.o
.PHONY : MathObject.cpp.o

MathObject.i: MathObject.cpp.i

.PHONY : MathObject.i

# target to preprocess a source file
MathObject.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathObject.cpp.i
.PHONY : MathObject.cpp.i

MathObject.s: MathObject.cpp.s

.PHONY : MathObject.s

# target to generate assembly for a file
MathObject.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MathObject.cpp.s
.PHONY : MathObject.cpp.s

Matrix.o: Matrix.cpp.o

.PHONY : Matrix.o

# target to build an object file
Matrix.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Matrix.cpp.o
.PHONY : Matrix.cpp.o

Matrix.i: Matrix.cpp.i

.PHONY : Matrix.i

# target to preprocess a source file
Matrix.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Matrix.cpp.i
.PHONY : Matrix.cpp.i

Matrix.s: Matrix.cpp.s

.PHONY : Matrix.s

# target to generate assembly for a file
Matrix.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/Matrix.cpp.s
.PHONY : Matrix.cpp.s

MatrixAdd.o: MatrixAdd.cpp.o

.PHONY : MatrixAdd.o

# target to build an object file
MatrixAdd.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixAdd.cpp.o
.PHONY : MatrixAdd.cpp.o

MatrixAdd.i: MatrixAdd.cpp.i

.PHONY : MatrixAdd.i

# target to preprocess a source file
MatrixAdd.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixAdd.cpp.i
.PHONY : MatrixAdd.cpp.i

MatrixAdd.s: MatrixAdd.cpp.s

.PHONY : MatrixAdd.s

# target to generate assembly for a file
MatrixAdd.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixAdd.cpp.s
.PHONY : MatrixAdd.cpp.s

MatrixEquation.o: MatrixEquation.cpp.o

.PHONY : MatrixEquation.o

# target to build an object file
MatrixEquation.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixEquation.cpp.o
.PHONY : MatrixEquation.cpp.o

MatrixEquation.i: MatrixEquation.cpp.i

.PHONY : MatrixEquation.i

# target to preprocess a source file
MatrixEquation.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixEquation.cpp.i
.PHONY : MatrixEquation.cpp.i

MatrixEquation.s: MatrixEquation.cpp.s

.PHONY : MatrixEquation.s

# target to generate assembly for a file
MatrixEquation.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixEquation.cpp.s
.PHONY : MatrixEquation.cpp.s

MatrixMul.o: MatrixMul.cpp.o

.PHONY : MatrixMul.o

# target to build an object file
MatrixMul.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixMul.cpp.o
.PHONY : MatrixMul.cpp.o

MatrixMul.i: MatrixMul.cpp.i

.PHONY : MatrixMul.i

# target to preprocess a source file
MatrixMul.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixMul.cpp.i
.PHONY : MatrixMul.cpp.i

MatrixMul.s: MatrixMul.cpp.s

.PHONY : MatrixMul.s

# target to generate assembly for a file
MatrixMul.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/MatrixMul.cpp.s
.PHONY : MatrixMul.cpp.s

SolveMEq.o: SolveMEq.cpp.o

.PHONY : SolveMEq.o

# target to build an object file
SolveMEq.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/SolveMEq.cpp.o
.PHONY : SolveMEq.cpp.o

SolveMEq.i: SolveMEq.cpp.i

.PHONY : SolveMEq.i

# target to preprocess a source file
SolveMEq.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/SolveMEq.cpp.i
.PHONY : SolveMEq.cpp.i

SolveMEq.s: SolveMEq.cpp.s

.PHONY : SolveMEq.s

# target to generate assembly for a file
SolveMEq.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/SolveMEq.cpp.s
.PHONY : SolveMEq.cpp.s

System/Env.o: System/Env.cpp.o

.PHONY : System/Env.o

# target to build an object file
System/Env.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/Env.cpp.o
.PHONY : System/Env.cpp.o

System/Env.i: System/Env.cpp.i

.PHONY : System/Env.i

# target to preprocess a source file
System/Env.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/Env.cpp.i
.PHONY : System/Env.cpp.i

System/Env.s: System/Env.cpp.s

.PHONY : System/Env.s

# target to generate assembly for a file
System/Env.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/Env.cpp.s
.PHONY : System/Env.cpp.s

System/EventDispatcher.o: System/EventDispatcher.cpp.o

.PHONY : System/EventDispatcher.o

# target to build an object file
System/EventDispatcher.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventDispatcher.cpp.o
.PHONY : System/EventDispatcher.cpp.o

System/EventDispatcher.i: System/EventDispatcher.cpp.i

.PHONY : System/EventDispatcher.i

# target to preprocess a source file
System/EventDispatcher.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventDispatcher.cpp.i
.PHONY : System/EventDispatcher.cpp.i

System/EventDispatcher.s: System/EventDispatcher.cpp.s

.PHONY : System/EventDispatcher.s

# target to generate assembly for a file
System/EventDispatcher.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventDispatcher.cpp.s
.PHONY : System/EventDispatcher.cpp.s

System/EventDto.o: System/EventDto.cpp.o

.PHONY : System/EventDto.o

# target to build an object file
System/EventDto.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventDto.cpp.o
.PHONY : System/EventDto.cpp.o

System/EventDto.i: System/EventDto.cpp.i

.PHONY : System/EventDto.i

# target to preprocess a source file
System/EventDto.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventDto.cpp.i
.PHONY : System/EventDto.cpp.i

System/EventDto.s: System/EventDto.cpp.s

.PHONY : System/EventDto.s

# target to generate assembly for a file
System/EventDto.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventDto.cpp.s
.PHONY : System/EventDto.cpp.s

System/EventHandler.o: System/EventHandler.cpp.o

.PHONY : System/EventHandler.o

# target to build an object file
System/EventHandler.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventHandler.cpp.o
.PHONY : System/EventHandler.cpp.o

System/EventHandler.i: System/EventHandler.cpp.i

.PHONY : System/EventHandler.i

# target to preprocess a source file
System/EventHandler.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventHandler.cpp.i
.PHONY : System/EventHandler.cpp.i

System/EventHandler.s: System/EventHandler.cpp.s

.PHONY : System/EventHandler.s

# target to generate assembly for a file
System/EventHandler.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/EventHandler.cpp.s
.PHONY : System/EventHandler.cpp.s

System/SingletonObject.o: System/SingletonObject.cpp.o

.PHONY : System/SingletonObject.o

# target to build an object file
System/SingletonObject.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/SingletonObject.cpp.o
.PHONY : System/SingletonObject.cpp.o

System/SingletonObject.i: System/SingletonObject.cpp.i

.PHONY : System/SingletonObject.i

# target to preprocess a source file
System/SingletonObject.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/SingletonObject.cpp.i
.PHONY : System/SingletonObject.cpp.i

System/SingletonObject.s: System/SingletonObject.cpp.s

.PHONY : System/SingletonObject.s

# target to generate assembly for a file
System/SingletonObject.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/SingletonObject.cpp.s
.PHONY : System/SingletonObject.cpp.s

System/SystemObject.o: System/SystemObject.cpp.o

.PHONY : System/SystemObject.o

# target to build an object file
System/SystemObject.cpp.o:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/SystemObject.cpp.o
.PHONY : System/SystemObject.cpp.o

System/SystemObject.i: System/SystemObject.cpp.i

.PHONY : System/SystemObject.i

# target to preprocess a source file
System/SystemObject.cpp.i:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/SystemObject.cpp.i
.PHONY : System/SystemObject.cpp.i

System/SystemObject.s: System/SystemObject.cpp.s

.PHONY : System/SystemObject.s

# target to generate assembly for a file
System/SystemObject.cpp.s:
	$(MAKE) -f CMakeFiles/Math.dir/build.make CMakeFiles/Math.dir/System/SystemObject.cpp.s
.PHONY : System/SystemObject.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... Math"
	@echo "... BasicNumber.o"
	@echo "... BasicNumber.i"
	@echo "... BasicNumber.s"
	@echo "... CliCommandParser.o"
	@echo "... CliCommandParser.i"
	@echo "... CliCommandParser.s"
	@echo "... Command.o"
	@echo "... Command.i"
	@echo "... Command.s"
	@echo "... CommandFactory.o"
	@echo "... CommandFactory.i"
	@echo "... CommandFactory.s"
	@echo "... Equation.o"
	@echo "... Equation.i"
	@echo "... Equation.s"
	@echo "... Math.o"
	@echo "... Math.i"
	@echo "... Math.s"
	@echo "... MathCommand.o"
	@echo "... MathCommand.i"
	@echo "... MathCommand.s"
	@echo "... MathMain.o"
	@echo "... MathMain.i"
	@echo "... MathMain.s"
	@echo "... MathObject.o"
	@echo "... MathObject.i"
	@echo "... MathObject.s"
	@echo "... Matrix.o"
	@echo "... Matrix.i"
	@echo "... Matrix.s"
	@echo "... MatrixAdd.o"
	@echo "... MatrixAdd.i"
	@echo "... MatrixAdd.s"
	@echo "... MatrixEquation.o"
	@echo "... MatrixEquation.i"
	@echo "... MatrixEquation.s"
	@echo "... MatrixMul.o"
	@echo "... MatrixMul.i"
	@echo "... MatrixMul.s"
	@echo "... SolveMEq.o"
	@echo "... SolveMEq.i"
	@echo "... SolveMEq.s"
	@echo "... System/Env.o"
	@echo "... System/Env.i"
	@echo "... System/Env.s"
	@echo "... System/EventDispatcher.o"
	@echo "... System/EventDispatcher.i"
	@echo "... System/EventDispatcher.s"
	@echo "... System/EventDto.o"
	@echo "... System/EventDto.i"
	@echo "... System/EventDto.s"
	@echo "... System/EventHandler.o"
	@echo "... System/EventHandler.i"
	@echo "... System/EventHandler.s"
	@echo "... System/SingletonObject.o"
	@echo "... System/SingletonObject.i"
	@echo "... System/SingletonObject.s"
	@echo "... System/SystemObject.o"
	@echo "... System/SystemObject.i"
	@echo "... System/SystemObject.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -P /home/sergey/projects/Math/CMakeFiles/VerifyGlobs.cmake
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
