#include "main.h"
/**
 * switcher - a function that selectes the appropriate function
 * @c: the format
 * @arr: the list of arguments
 * Return: the number of printed charcters upon success
 */
int switcher(char c, va_list arr)
{
	switch (c)
	{
		case ('d'):
			return (deci(arr));
		case ('c'):
			return (pr_char(arr));
		case ('i'):
			return (deci(arr));
		case ('s'):
			return (p_str(arr));
		case ('%'):
			_putchar('%');
			return (1);
		case ('x'):
			return (hex(arr));
		case ('X'):
			return (hex_2(arr));
		case ('u'):
			return (unsi(arr));
		case ('o'):
			return (octa(arr));
		default:
			_putchar('%');
			return (-1);

	}
	return (0);
}
