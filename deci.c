#include "main.h"
/**
 * deci - a function that prints decimal numbers
 * @arr: the list of arguments
 * Return: the number of printed characters up on success
 */
int deci(va_list arr)
{
	int arg[64], i = 0, n, count = 0;

	n = va_arg(arr, int);
	if (n == 0)
	{
		_putchar('0');
		return (count);
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
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
