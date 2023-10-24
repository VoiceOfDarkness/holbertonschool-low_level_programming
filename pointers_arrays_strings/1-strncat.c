#include "main.h"
/**
 * *_strncat - Entry point
 *
 *@dest: string
 *
 *@src: string
 *
 *@n: integer
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int len, j;

for (len = 0; dest[len] != '\0'; len++)
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[len + j] = src[j];
}
dest[len + j] = '\0';
return (dest);
}
