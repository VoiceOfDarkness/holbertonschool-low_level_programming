#include "main.h"
/**
 * 5-rev_string.c - Entry point
 *
 *@str: int
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int len = 0;
int i = 0;

str = "My School";

while (str[len] != '\0')
len++;

for (i = 0; i <= len; i++)
_putchar(str[i]);

_putchar('\n');

for (len = len - 1; len >= 0; len--)
_putchar(str[len]);

_putchar('\n');
}
