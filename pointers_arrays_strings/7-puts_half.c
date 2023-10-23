#include "main.h"
/**
 * puts_half - Entry point
 *
 *@str: int
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int len = 0;
int i = 0;

while (str[len] != '\0')
len++;

for (i = 0; i <= (len - 1) / 2; i++)
putchar(str[i]);

putchar('\n');
}
