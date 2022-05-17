#include "main.h"
/**
 * _printf - a function that prints stirngs
 * @format: the format of the string
 * return: 0
 */

int _printf(const char *format, ...)
{
	if (*format)
	{
		int intg;
		char *strg;
		char kar;
		va_list arr;
		va_start (arr, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case ('d'):
						intg = va_arg(arr, int);
						if (intg == 0)
						{
							_putchar('0');
							format++;
							break;
						}
						deci(intg);
						format++;
						break;
					case ('i'):
						intg = va_arg(arr, int);
						if (intg == 0)
						{
							_putchar('0');
							format++;
							break;
						}
						deci(intg);
						format++;
						break;
					case ('s'):
						strg = va_arg(arr, char *);
						while (*strg)
						{
							_putchar(*strg);
							strg++;
						}
						format++;
						break;
					case ('c'):
						kar = va_arg(arr, int);
						_putchar(kar);
						format++;
						break;
					case ('%'):
						_putchar('%');
						format++;
						break;
					case ('x'):
						intg = va_arg(arr, int);
						hex(intg);
						format++;
						break;
					case ('u'):
						intg = va_arg(arr, int);
						unsi(intg);
						format++;
						break;
					case ('o'):
						intg = va_arg(arr, int);
						octa(intg);
						format++;
						break;
					case ('X'):
						intg = va_arg(arr, int);
						hex_2(intg);
						format++;
						break;
					default:
						_putchar('%');
				}
			}
			else
			{
				_putchar(*format);
				format++;
			}
		}
		va_end(arr);
		return (0);
	}
	return (-1);
}
