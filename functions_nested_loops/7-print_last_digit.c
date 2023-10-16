#include "main.h"

/**
 * print_last_digit - returns last digit
 *
 * @num: digit
 *
 * Return: last digit
 **/
int print_last_digit(int num)
{
int last;
last = num % 10;
if (last < 0)
{
last = -last;
}
_putchar(48 + last);
return (last);
}
