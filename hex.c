#include "main.h"
/**
 * hex - a function that prints hexadecimal
 * @arr: a list of arguments
 * Return: the number of printed characters up on success
 */
int hex(va_list arr)
{
	unsigned int n = va_arg(arr, unsigned int);
	int arg[64], i = 0, count = 0;

	while (n)
	{
		arg[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (arg[i] > 9)
		{
			_putchar('0' + arg[i] + 39);
		}
		else
		{
			_putchar('0' + arg[i]);
		}
		i--;
		count++;
	}
	return (count);
}
