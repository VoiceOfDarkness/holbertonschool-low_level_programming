#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n >= strlen(s2))
n = strlen(s2);

result = (char *)malloc(sizeof(char) * (strlen(s1) + n + 1));

if (result == NULL)
return (NULL);

strcpy(result, s1);
strncat(result, s2, n);

return (result);
}
