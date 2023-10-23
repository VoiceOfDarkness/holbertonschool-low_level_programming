#include "main.h"
/**
 * _puts - Entry point
 *
 *@str: int
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int len = 0;
int i = 0;

while (str[len] != '\0')
len++;

for (i = 0; i <= len; i++)
if (i % 2 == 0 || i == 0)
putchar(str[i]);

putchar('\n');
return (0);
}
