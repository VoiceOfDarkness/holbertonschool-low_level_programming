#include <main.h>

/**
 * _islower - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/

void jack_bauer(void)
{
int hr;
int min;

for (hr = 0; hr < 24; hr++)
{
for (min = 0; min < 60; min++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
