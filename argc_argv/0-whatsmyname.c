#include <stdio.h>

/**
 * main - prints name of file
 * @argc: number of arguments
 * @argv: arguments entered
 * Description: print name of file
 * Return: zero
 **/
int main(int argc, char **argv)
{
(void)argc;

printf("%s\n", argv[0]);
return (0);
}
