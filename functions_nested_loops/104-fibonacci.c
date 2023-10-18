#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
**/

typedef unsigned char byte;
#define N 300

typedef struct
{
byte digits[N];
} Bignum;

void printbig(Bignum a)
{
int leading = 1;
for (int i = 0; i < N; ++i)
{
if (a.digits[i])
{
leading = 0;
printf("%c", a.digits[i] + '0');
}
else
{
if (!leading)
{
printf("0");
}
}
}
if (leading)
printf("0");
}

Bignum initbig(int x)
{
Bignum a = {{0}};
a.digits[N - 1] = x;
return (a);
}

Bignum addbig(Bignum a, Bignum b)
{
Bignum c;
int sum, carry = 0;

for (int i = N - 1; i >= 0; --i)
{
sum = a.digits[i] + b.digits[i] + carry;
if (sum <= 9)
{
c.digits[i] = sum;
carry = 0;
}
else
{
c.digits[i] = sum - 10;
carry = 1;
}
}
return (c);
}

int main(void)
{
Bignum a, b, c;

a = initbig(1);
b = initbig(1);


printbig(a);
printf(", ");

for (int i = 3; i <= 99; ++i)
{
c = addbig(a, b);
printbig(c);
if (i != 99)
printf(", ");
a = b;
b = c;
}
return (0);
}
