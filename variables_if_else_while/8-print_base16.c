#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 48;

while (num < 58)
{
putchar(num);
num++;
}

num = 97;

while (num < 103)
{
putchar(num);
num++;
}

putchar('\n');
return (0);
}
