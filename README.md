# Low Level Foundations

This is a Low Level Foundations repository created to learn the main principies behind low level programming, master the logical skills in coding and convert it into a guide to others students or developers.

<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
* [Instalation](#Instalation)
* [Standart Library](#standart-library)
* [Libraries and Make Files](#installation)
* [Data Structure and Algorithms](#data-structure-and-algorithms)
* [Usage](#usage)
* [Roadmap](#roadmap)
* [Contributing](#contributing)
* [License](#license)
* [Contact](#contact)
* [Acknowledgements](#acknowledgements)

## About The Project
**What is a Low Level Programming Language**

When we talk about low level language we are refearing to language with low abstraction which is meaning, in other words, that it is more like a machine languages than human languages. That is important to having in account because machines just understands binary number so that mean the less abstraction a language have, the harder is to be understanded for humans.

**What is C**

C is a Low Level Programming Language Created by Dennis Ritchie.

**Why C**

Today there are a lot of languages which easy the developers life being very similar to english language, like Python, Dart, Javascript and others. But that does not make C deprecated, C today is very important in our life, because is the language in which our S.O are developed, the majory of the security systems are built on it and our robots use it because of his efficiency.

Why you would want to learn C even if your not interested in low level? No matter the area in which you want to work, as developer, C will give you a better understanding about how the memory works and what is happening on behind of high leve languanges like python or javascript. 


## Instalation
This programs and functions might be compiled with ***gcc 4.8.4*** using the flags ***-Wall -Werror -Wextra and -pedantic***

## Standart Library
This Project series is created to get the first look into the C language by creating the most populars functions found in the standard library

### [1. Hello World](./0x00-hello_world)
Achieved knowledges:
* What is an entry point
* What is main
* How to compile using gcc
* How to find the right header to include in your source code

### [2. Variables and conditionals](./0x01-variables_if_else_while)
Achieved Knowledges:
* Aritmetic operators
* Logical operators
* Relational operators
* Booleans
* Conditions
* Variables of types char, int, unsigned int
* What is the ASCII character set
* What are the purpose of the gcc flags -m32 and -m64

### [3. Functions and neested loops](./0x02-functions_nested_loops)
Achieved Knowledges:

* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration* and a definition of a function
* What is a prototype
* Scope of variables

### [4. Debugging](./0x03-debugging)
Achieved Knowledges:
* What is debugging
* What are some methods of debugging manually
* How to read the error messages

### [5. Pointers, Arrays, Strings](./0x05-pointers_arrays_strings)
Achieved Knowledges:
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

### [6. More pointers, arrays and strings](./0x06-pointers_arrays_strings)
Achieved Knowledges:
* Pointers
* Arrays
* Strings

### [7. Even more pointers, arrays and strings](./0x07-pointers_arrays_strings)
Achieved Knowledges:
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

### [8. Recursion](./0x08-recursion)
Achieved Knowledges:
* What is recursion
* How to implement recursion
* In what situations you should implement
recursion
* In what situations you shouldn’t implement recursion

### [9. Argc, Argv](./0x0A-argc_argv)
Achieved Knowledges:
* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

### [9. Malloc, Free](./0x0B-malloc_free)
Achieved Knowledges:
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

### [10. Malloc, Free](./0x0C-more_malloc_free)
Achieved Knowledges:
* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them

### [11. Structures, typedef](./0x0E-structures_typedef)
Achieved Knowledges:
* What are structures, when, why and how to use them
* How to use typedef

### [12. Function pointers](./0x0F-function_pointers)
Achieved Knowledges:
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

### [13. Variadic functions](./0x10-variadic_functions)
Achieved Knowledges:
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

## preprocessor
How to take advantage of the compiller preprocessor phase
### [1. Preprocessor](./0x0D-preprocessor)
Achieved Knowledges:
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files


## Data Structure and Algorithms
Algorithms and data structures are generally created independent of underlying languages, most of the complex structures found in high level languages are created in C

### [1. Singly linked lists](./0x12-singly_linked_lists)
Achieved Knowledges:
* When and why using linked lists vs arrays
* How to build and use linked lists

### [2. Singly linked lists](./0x13-more_singly_linked_lists)
Achieved Knowledges:
* How to use linked lists
* Start to look for the right source of information without too much help

### [3. Doubly linked lists](./0x13-more_singly_linked_lists)
Achieved Knowledges:
* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

### [4. Hash tables](./0x1A-hash_tables)
Achieved Knowledges:
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables


# Make Files and Libraries
### [1. Static libraries](./0x09-static_libraries)
Achieved Knowledges:
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

### [2. Dynamic libraries](./0x18-dynamic_libraries)
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

### [3. Makefiles](./0x1C-makefiles)
* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them



0x09


Files deleted or Modified: README udpated

README have been updated with relevant information about the project
Unnecessary files were deleted files: