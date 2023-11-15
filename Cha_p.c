#include "main.h"
/**
 * Cha_p - character printed
 * @ch: Arguments
 * Return: an integer
 */
int Cha_p(va_list ch)
{
	char K;

	K = va_arg(ch, int);
	_putchar(K);
	_putchar('\n');
	return (1);
}
