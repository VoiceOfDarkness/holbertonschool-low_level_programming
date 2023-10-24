#include "main.h"
/**
 * *_strcat - Entry point
 *
 *@dest: string
 *
 *@src: string
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
char *result = dest;

while (*dest != '\n')
{
dest++;
}

while(*src != '\n')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);
}
