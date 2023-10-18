#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
int n = 50, i;
unsigned long fib[50];

fib[0] = 0;
fib[1] = 1;

for (i = 2; i < n; i++) {
fib[i] = fib[i-1] + fib[i-2];
}

for (i = 0; i < n; i++) {
printf("%lu ", fib[i]);
}

return 0;
}
