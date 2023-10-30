#include "main.h"
/**
 * result - Entry point
 *
 *@a: int
 *@b: int
 *
 * Return: Always 0 (Success)
 */
int result(int a, int b)
{
if (b < 2 || b % a == 0)
{
return (0);
}
else if (a > b / 2)
{
return (1);
}
else
{
return (result(a + 1, b));
}
}
/**
 * is_prime - Entry point
 *
 *@n: int
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}

return (result(2, n));
}
