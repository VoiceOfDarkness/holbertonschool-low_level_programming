#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number to clear
 * @index: index to clear
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	temp = ~(1 << index);
	*n = *n & temp;

	return (1);
}
