#include "main.h"
/**
 * _strchr - Concatenate two strings, limiting the number of characters copied
 *
 * @s: Destination string
 * @c: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
	return (&s[i]);
}
}
if (c == '\0')
return (s);

return (NULL);
}
