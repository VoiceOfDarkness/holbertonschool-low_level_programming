#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
int i;

for (i = 0; i <= 9; i++)
{
print_alphabet();
}
}
