#include "main.h"

/**
 * _isalpha - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, upper or letter, type int
 *
 * Return: 1 if letter, 0 otherwise
 **/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 60 && c <= 90))
return (1);
else
return (0);
}
