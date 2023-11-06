#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Entry point
 *
 * @size: int
 * @c: char
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}

pointer = (char *)malloc(4 * sizeof(char));

if (pointer == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
pointer[i] = c;
}

return (pointer);
}