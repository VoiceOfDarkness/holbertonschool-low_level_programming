#include "main.h"
/**
 * _strlen_recursion - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return _strlen_recursion(s + 1) + 1;
}
