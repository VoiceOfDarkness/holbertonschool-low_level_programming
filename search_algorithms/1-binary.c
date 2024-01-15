#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, k;

	if (array == NULL)
		return (-1);

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		printf("Searching in array: ");
		for (k = i; k < j; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);
		k = (i + j) / 2;
		if (array[k] < value)
			i = k + 1;
		else if (array[k] > value)
			j = k - 1;
		else
			return (k);
	}
	return (-1);
}