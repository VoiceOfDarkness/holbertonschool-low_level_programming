#include "main.h"
/**
 * add - returns 1 if char is lowercase
 *
 * @a: character to be checked if grater than zero etc, type int
 *
 * @b: character to be checked if g
 *
 * Return: 1 and prints + if > 0, 0 otherwise
 **/
void print_square(int size)
{
if (size < 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar('#');
}

_putchar('\n');
}
}
}
