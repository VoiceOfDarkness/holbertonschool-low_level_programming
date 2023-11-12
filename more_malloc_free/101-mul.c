#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* print_error_and_exit - print error and exit
* Return: void
*/
void print_error_and_exit(void) {
printf("Error\n");
exit(98);
}
/**
* is_number - checkin is number
* @str: string
*
* Return: 1
*/
int is_number(char *str) {
while (*str) {
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}
/**
* main - multiplies two numbers.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char *argv[]) {
unsigned long num1, num2, result;

if (argc != 3)
print_error_and_exit();

if (!is_number(argv[1]) || !is_number(argv[2]))
print_error_and_exit();

num1 = strtoul(argv[1], NULL, 10);
num2 = strtoul(argv[2], NULL, 10);

result = num1 * num2;

printf("%lu\n", result);

return (0);
}
