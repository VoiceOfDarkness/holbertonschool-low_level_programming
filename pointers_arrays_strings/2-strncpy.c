#include "main.h"
/**
 * *_strncpy - Entry point
 *
 *@dest: string
 *
 *@src: string
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int len;

for (len = 0; len < n && *(src + len); len++)
{
*(dest + len) = *(src + len);
}
for (; len < n; len++)
{
*(dest + len) = '\0';
}
return (dest);
}
