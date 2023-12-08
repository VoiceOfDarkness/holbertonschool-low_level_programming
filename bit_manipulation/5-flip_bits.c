#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int result;

	result = n ^ m;

	while (result > 0)
	{
		if (get_bit(result, 0) == 1)
			count++;
		result >>= 2;

	}

	return (count);
}
