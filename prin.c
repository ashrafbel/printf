#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);
while (*format)
{
if (*format == '%' && *(format + 1))
{
format++;
switch (*format)
{
case 'c':
count += Cha_p(args);
break;
case 's':
count += p_string(args);
break;
case '%':
count += p_percent();
break;
case 'i':
case 'd':
count += print_d(args);
break;
default:
count += _putchar('%');
count += _putchar(*format);
break;         }
}
else
{
count += _putchar(*format);
}
format++;
}
va_end(args);
return (count);
}

