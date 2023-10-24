#include "main.h"
/**
 * _strstr - Concatenate two strings, limiting the number of characters copied
 *
 * @haystack: Destination string
 * @needle: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return (0);
}
