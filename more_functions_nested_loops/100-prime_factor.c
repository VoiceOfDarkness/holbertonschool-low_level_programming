#inlcude <stdio.h>
#inlcude "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int i, n = 612852475143;

for (i = 3; i < 782849; i += 2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
print("%lu\n", n);
return (0);
}
