#include "main.h"
/**
 * print_d_h - Recursive helper function to print an integer
 * @n: The integer to be printed
 * @count: Pointer to count the number of characters printed
 */
void print_d_h(int n, int *count)

{
if (n < 0)
{
_putchar('-');
n = -n;
(*count)++;
}

if (n / 10 != 0)
{
print_d_h(n / 10, count);
}

_putchar((n % 10) + '0');
(*count)++;
}

/**
 * print_d - decimal integer printed
 * @args:  the integer to be printed
 *
 * Return: print the number of character
 */
int print_d(va_list args)
{
int n = va_arg(args, int);
int C = 0;
print_d_h(n, &C);

return (C);
}
