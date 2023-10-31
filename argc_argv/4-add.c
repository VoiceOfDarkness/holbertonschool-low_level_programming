#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of file
 * @argc: number of arguments
 * @argv: arguments entered
 * Description: print name of file
 * Return: zero
 **/
int main(int argc, char **argv)
{
int i, result;

for (i = 0; i < argc; i++)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return 0;
}
else
{
result += atoi(argv[i]) ;
printf("%d\n", result);
}
}
}
