#include "main.h"
/**
 * swap_int - Entry point
 *
 *@a: int
 *@b: int
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
