#include "main.h"

/**
 * _ print_last_digit - returns last digit
 *
 * @n: digit
 *
 * Return: last digit
 **/

int print_last_digit(int n)
{
int last_digit = n % 10;

_putchar(last_digit + 48);
}
