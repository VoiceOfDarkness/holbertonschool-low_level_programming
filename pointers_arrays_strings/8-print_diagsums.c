#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Concatenate two strings, limiting
 *
 * @a: Destination string
 * @size: int
 *
 * Return: Pointer to the concatenated string
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - 1 - i));
}
printf("%d, %d\n", sum1, sum2);
}
