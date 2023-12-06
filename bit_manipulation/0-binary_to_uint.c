#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] < '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] < '\0'; i++)
	{
		result <<= 1;

		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
