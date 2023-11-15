#include "main.h"

/**
 * print_h - helper function to print an integer
 * @n: integer to be printed
 * @count: pointer to count the number of characters printed
 */
void print_h(int n, int *count)
{
if (n < 0)
{
_putchar('-');
n = -n;
(*count)++;
}
if (n / 10 != 0)
{
print_h(n / 10, count);
}
_putchar((n % 10) + '0');
(*count)++;
}

/**
 * print_i - integer printed
 * @in: The va_list that contains the integer to be printed
 * Return: prints the  number of character
 */
int print_i(va_list in)
{
int n = va_arg(in, int);
int C = 0;

print_h(n, &C);
return (C);
}
