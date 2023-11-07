#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *result;

if (nmemb == 0 || size == 0)
return (NULL);

result = malloc(nmemb * size);

if (result == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
result[i] = 0;

return (result);
}
