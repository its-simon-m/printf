#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char a);
int hex(va_list arr);
int deci(va_list arr);
int unsi(va_list arr);
int octa(va_list arr);
int hex_2(va_list arr);
int p_str(va_list arr);
int pr_char(va_list arr);
int switcher(char c, va_list arr);
#endif
