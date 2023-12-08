#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int result;

	if (n > 1)
		print_binary(n >> 1);

	result = n & 1;
	putchar(result + '0');

	return;
}
