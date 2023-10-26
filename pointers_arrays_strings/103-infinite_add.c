#include "main.h"
/**
* infinite_add - Adds two strings as if they were integers
*
* This function takes two strings as input and adds them
* together as if they were integers. The result is stored
* in a character array called r, which has a maximum size
* of size_r. The function returns a pointer to the r array
* if the addition is successful, and returns 0 otherwise.
* The function works by iterating over the input strings from
* right to left, adding the corresponding digits together and
* carrying over any remainders to the next iteration. The
* result is stored in the r array in reverse order, and then
* reversed again before being returned.
*
* @n1: The first input string
* @n2: The second input string
* @r: The character array to store the result
* @size_r: The maximum size of the r array
*
* Return: A pointer to the r array if the addition is successful, and 0 otherwise
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n;

for (i = 0; n1[i]; i++);
for (j = 0; n2[j]; j++);
if (i > size_r || j > size_r)
return (0);
m = 0;
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0)
n += n1[i] - '0';
if (j >= 0)
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
return (0);
for (k -= 1, l = 0; l < k; k--, l++)
{
m = r[k];
r[k] = r[l];
r[l] = m;
}
return (r);
}
