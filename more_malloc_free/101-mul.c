#include <stdio.h>
#include <stdlib.h>

/**
* is_digit - checks if a string is composed only of digits
* @str: the string to check
*
* Return: 1 if the string is composed only of digits, 0 otherwise
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* multiply - multiplies two numbers
* @num1: the first number
* @num2: the second number
*
* Return: the result of the multiplication
*/
int multiply(int num1, int num2)
{
return (num1 * num2);
}

/**
* main - entry point
* @argc: the number of arguments
* @argv: the arguments
*
* Return: 0 on success, 98 on failure
*/
int main(int argc, char **argv)
{
int num1, num2, *result_ptr;
char *error_message = "Error\n";

if (argc != 3)
{
printf("%s", error_message);
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("%s", error_message);
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result_ptr = (int *)malloc(sizeof(int));
if (result_ptr == NULL) {
printf("%s", error_message);
return (98);
}

*result_ptr = multiply(num1, num2);

printf("%d\n", *result_ptr);

free(result_ptr);

return (0);
}
