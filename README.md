# C Programming Essentials - README

## Why C Programming is Awesome

C programming is considered awesome for several reasons:
- It is efficient and offers low-level memory manipulation.
- C is highly portable, making it suitable for a wide range of platforms.
- It provides both low-level control and high-level abstraction.
- It has a rich standard library, making it versatile for various applications.

## Inventor of C

C programming language was invented by **Dennis Ritchie** at Bell Labs in the early 1970s.

## Notable Figures

- **Dennis Ritchie**: Co-inventor of C and a significant contributor to Unix.
- **Brian Kernighan**: Co-author of "The C Programming Language" (K&R C) and a renowned computer scientist.
- **Linus Torvalds**: Creator of the Linux operating system, a prominent figure in open-source software development.

## Compiling C Code with `gcc`

When you type `gcc main.c`, the `gcc` compiler compiles the `main.c` source code into an executable program, often named `a.out` by default.

## Entry Point and `main`

- The **entry point** in a C program is the location where program execution begins.
- In C, the `main` function serves as the entry point. Execution starts at the beginning of the `main` function.

## Printing Text

- To print text in C, you can use:
  - `printf`: For formatted output. Example: `printf("Hello, %s!\n", "World");`
  - `puts`: For outputting a string with a newline character. Example: `puts("Hello, World!");`
  - `putchar`: For outputting a single character. Example: `putchar('A');`

## Getting the Size of a Type

- Use the unary operator `sizeof` to get the size (in bytes) of a specific data type. Example: `sizeof(int)` returns the size of an integer.

## Compiling with `gcc`

- To compile C code using `gcc`, use a command like `gcc source.c -o output_program`. It generates an executable named `output_program`.

## Default Program Name

- The default program name when compiling with `gcc` is `a.out`. You can specify a different output name with the `-o` option.

## Official C Coding Style and `betty-style`

- There is no single official C coding style, but popular standards include K&R (Kernighan and Ritchie) and the GNU Coding Standards.
- `betty-style` is a tool for checking C code against the Linux kernel coding style.

## Including Headers

- To find the right header for standard library functions, refer to the documentation for the function you are using or include standard headers like `<stdio.h>`, `<stdlib.h>`, etc.

## `main` Function and Program Return Value

- The `main` function in C can return an integer value.
- By convention, a return value of `0` indicates successful execution, while non-zero values indicate errors or exceptional conditions.
