#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: number to set
 * @index: index to set
 *
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	temp = 1 << index;
	*n = *n | temp;

	return (1);
}
