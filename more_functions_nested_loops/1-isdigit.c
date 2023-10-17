#include "main.h"
/**
 * _isdigit - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
int _isdigit(int c)
{
if (c >= 48 && c <= 58)
{
return (1);
}
return (0);
}
