#include "main.h"
/**
 * _slen - find the lenght
 * @s: the string
 * Return: int
 */

int _slen(char *s)
{
	int K = 0;
while (s[K] != '\0')
{
K++;
}
return (K);
}

/**
 * p_string - print a string.
 * @val: argument
 * Return: length of  string
 */

int p_string(va_list val)
{
char *s;
int k, l;

s = va_arg(val, char *);
if (s == NULL)
{
s = "(null)";
}

l = _slen(s);
for (k = 0; k < l; k++)
{
_putchar(s[k]);
}
_putchar('\n');
_putchar('\n');
return (l);
}
