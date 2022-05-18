#include "main.h"
/**
 * hex_2 - a fuction that prints in hexadecimal with upper case letters
 * @arr: the list of arguments
 * Return: the number of printed charactres upon success
 */
int hex_2(va_list arr)
{
	unsigned int n = va_arg(arr, unsigned int);
	int arg[64], i = 0, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (count);
	}
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
			_putchar('0' + arg[i] + 7);
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
