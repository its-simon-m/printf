#include "main.h"
/**
 * p_str - a fucntion that prints strings
 * @arr: the array of arguments
 * Return: the number of printed characters upon succes
 */
int p_str(va_list arr)
{
	int count = 0;
	char *s;

	s = va_arg(arr, char *);
	if (*s)
	{
		while (*s)
		{
			_putchar(*s);
			s++;
			count++;
		}
		return (count);
	}
	else
	{
		s = "null";
		while (*s)
		{
			_putchar(*s);
			s++;
		}
		return (0);
	}
}
