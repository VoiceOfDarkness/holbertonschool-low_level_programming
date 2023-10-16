#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
char upper = 'A';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

while (upper <= 'Z')
{
putchar(upper);
upper++;
}

putchar('\n');
return (0);
}
