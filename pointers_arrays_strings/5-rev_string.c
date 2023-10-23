#include "main.h"
/**
 * 5-rev_string.c - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int len = 0;
int i = 0;

while (s[len] != '\0')
len++;

for (i = 0; i <= len; i++)
_putchar(s[i]);

_putchar('\n');

for (len = len - 1; len >= 0; len--)
_putchar(s[len]);

_putchar('\n');
}
