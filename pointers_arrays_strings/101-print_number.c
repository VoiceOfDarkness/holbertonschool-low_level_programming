#include "main.h"
/**
* print_number - Prints an integer to the console
*
* This function takes an integer as input and prints it to the console. If the
* integer is negative, the function first prints a minus sign and then
* converts the integer to its absolute value. The function then recursively
* divides the integer by 10 until it reaches a single digit, and prints each
* digit to the console using the putchar function. The putchar function takes
* a single character as input and prints it to the console. In this case, the
* function converts the digit to its ASCII code by adding it to the character '0',
* which has an ASCII code of 48. This converts the digit to its corresponding ASCII
* code, which is then printed to the console.
*
* @n: The integer to be printed
*
* Return: void
*/
void print_number(int n)
{
if (n < 0) {
putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar(n%10 + '0');
}
