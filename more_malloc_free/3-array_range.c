#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *result, i;

if (min > max)
return (NULL);

result = malloc((max - min + 1) * sizeof(int));

if (result == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
result[i] = min;

return (result);
}
