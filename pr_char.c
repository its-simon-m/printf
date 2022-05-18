#include "main.h"
/**
 * pr_char - a function that prints a character
 * @arr: the array of arguments
 * Return: 1 upon sucess 0 if fail
 */
int pr_char(va_list arr)
{
	char s;

	s = va_arg(arr, int);
	if (s)
	{
		_putchar(s);
		return (1);
	}
	return (0);
}
