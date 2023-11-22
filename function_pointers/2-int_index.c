#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of array
 * @cmp: pointer to the function to use to compare values
 *
 * Return: index of the first element for which the cmp function
 *         does not return 0, or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}
}
