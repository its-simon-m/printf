#include "main.h"
/**
 * _printf - a function that prints stirngs
 * @format: the format of the string
 * Return: teh number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list arr;
	int intg = 0, count = 0;

	if (*format)
	{
		va_start(arr, format);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				intg = switcher(*format, arr);
				if (intg != -1)
					format++;

			}
			else
			{
				_putchar(*format);
				format++;
				count++;
			}
		}
		va_end(arr);
		return (count + intg);
	}
	return (-1);
}
