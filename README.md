# My Operating System

To create you need some files :
- #### the ``` kernel.cpp ``` our kernel file 
- #### the ``` makefile  ``` we use with the tool [make](https://www.gnu.org/software/make/) for to do :
	+ Automating Compilation (that's do all commands to compile)
	+ Dependency Management (make recompile only the necessary if main.cpp contain the function of function.cpp )
	+ Simplify Multi-Step Processes (like creating object files, linking libraries, and running tests)
	+ Consistency Across Development (not needed to know all the details of compilation to use make)
- #### the ``` loader.ld  ``` that dictates memory layout for sections in the binary.
- #### the ``` loader.s ``` that configures the CPU state, initializes the environnement, and loads the kernel.


The binaries needed for this project are :
- ```g++``` : it's a GNU g++ command for compilation, preprocessing, assembly and linking of source code to generate an executable file.
- ```binutils``` : is a collection of tools to work with executable code 
- ```libc6-dev-i386``` : Contains the symlinks and object files needed to compile and link programs which use the standard C library









In computing, a symlink is a symbol link that is a file whose purpose is to point to a file or directory by specifing a path for macOS and a lot (or all) Unix system.
This is like a shortcut in a Windows OS.

![[img123.jpg]]



In C and C++,  ```.h``` files typically contain **declarations** for functions, variables, and data structures that you want to use across multiple files.