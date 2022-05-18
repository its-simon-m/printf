#include "main.h"
/**
 * unsi - a fucntion that prints unsigned decimals (in base 10)
 * @arr: an array of arguments
 * Return: the number of printed characters upon succes
 */

int unsi(va_list arr)
{
	int arg[64], i = 0, count = 0;
	unsigned int n = va_arg(arr, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (count);
	}
	while (n)
	{
		arg[i] = n % 10;
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar('0' + arg[i]);
		i--;
		count++;
	}
	return (count);
}
