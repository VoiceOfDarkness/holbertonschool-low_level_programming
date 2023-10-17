#include <stdio.h>
/**
 * print_to_98 - returns 1 if char is lowercase
 *
 * @n: int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
int main()
{
    int n = -10;
    int border = 98;

    if (n < border)
        while (n <= 98)
        {
            if (n == 98)
                printf("%d", n);
            else
                printf("%d, ", n);
            n++;
        }
    else
        while (n >= 98)
        {
            if (n == 98)
                printf("%d", n);
            else
                printf("%d, ", n);
            n--;
        }
}
