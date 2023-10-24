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
char *string = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (string);
}
