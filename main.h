#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int Cha_p(va_list ch);
int _slen(char *s);
void print_h(int n, int *count);
int print_i(va_list in);
int p_string(va_list val);
int p_percent(void);
void print_d_h(int n, int *count);
int print_d(va_list args);
#endif 

