# README.md

## File I/O Operations in C

This repository contains examples of basic file operations in C programming language using the system calls `open()`, `write()`, `read()`, and `close()`.

### Open a File

In C, the `open()` function is used to open a file. It returns a file descriptor. If the file cannot be opened, the function returns -1.

```c
#include <fcntl.h>

int fd;
fd = open("file.txt", O_RDONLY);
