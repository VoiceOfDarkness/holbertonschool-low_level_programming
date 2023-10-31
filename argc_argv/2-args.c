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

int i;
(void)argv;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
