#include "main.h"
/**
 * print_times_table - print times table up to input
 *
 * Description: prints n**n tables
 *
 * @n: size of times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
int x, y, size;


if (n > 15 || n < 0)
{
_putchar('\n');
}
else
{
{
for (y = 0; y <= n; y++)
{
for (x = 0; x <= n; x++)
{
size = (y * x);
if (x != 0)
{
_putchar(',');
_putchar(' ');
}
if (size < 10 && x != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((size % 10) + '0');
}
else if (size >= 10 && size < 100)
{
_putchar(' ');
_putchar((size / 10) + '0');
_putchar((size % 10) + '0');
}
else if (size >= 100 && x != 0)
{
_putchar((size / 100) + '0');
_putchar((size / 10) % 10 + '0');
_putchar((size % 10) + '0');
}
else
_putchar((size % 10) + '0');
}
_putchar('\n');
}
}
}

}
