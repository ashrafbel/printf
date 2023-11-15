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
