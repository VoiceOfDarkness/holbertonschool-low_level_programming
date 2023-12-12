#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_args - checks if the number of arguments is correct
 * @argc: number of arguments
 * Return: void
 */
void check_args(int argc)
{
        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }
}

/**
 * check_file_from - checks if the file_from can be read
 * @check: return value of read
 * @file: name of the file
 * @fd_from: file descriptor of the file_from
 * @fd_to: file descriptor of the file_to
 * Return: void
 */
void check_file_from(ssize_t check, char *file, int fd_from, int fd_to)
{
        if (check == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
                if (fd_from != -1)
                        close(fd_from);
                if (fd_to != -1)
                        close(fd_to);
                exit(98);
        }
}

/**
 * check_file_to - checks if the file_to can be written
 * @check: return value of write
 * @file: name of the file
 * @fd_from: file descriptor of the file_from
 * @fd_to: file descriptor of the file_to
 * Return: void
 */
void check_file_to(ssize_t check, char *file, int fd_from, int fd_to)
{
        if (check == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
                if (fd_from != -1)
                        close(fd_from);
                if (fd_to != -1)
                        close(fd_to);
                exit(99);
        }
}

/**
 * check_close - checks if the file descriptor can be closed
 * @check: return value of close
 * @fd: file descriptor
 * Return: void
 */
void check_close(int check, int fd)
{
        if (check == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
                exit(100);
        }
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
        int fd_from, fd_to, close_from, close_to;
        ssize_t len_read, len_write;
        char buffer[1024];
        mode_t file_perm;

        check_args(argc);
        fd_from = open(argv[1], O_RDONLY);
        check_file_from((ssize_t)fd_from, argv[1], -1, -1);

        file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
        fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
        check_file_to((ssize_t)fd_to, argv[2], fd_from, -1);

        len_read = 1024;

        while (len_read == 1024)
        {
                len_read = read(fd_from, buffer, 1024);
                check_file_from(len_read, argv[1], fd_from, fd_to);

                len_write = write(fd_to, buffer, len_read);
                if (len_write != len_read)
                        len_write = -1;
                check_file_to(len_write, argv[2], fd_from, fd_to);
        }

        close_from = close(fd_from);
        close_to = close(fd_to);
        check_close(close_from, fd_from);
        check_close(close_to, fd_to);

        return (0);
}
