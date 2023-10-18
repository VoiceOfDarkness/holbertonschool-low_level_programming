#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 98, i;
unsigned long fib[98];

fib[0] = 0;
fib[1] = 1;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 2; i < n; i++)
{
printf("%lu, ", fib[i]);
}


printf("\n");
return (0);
}
