#include "main.h"
/**
 * octa - a function that prints in octa decimal
 * @arr: the list of arguments
 * Return: the number of printed chars upon success
 */
int octa(va_list arr)
{
	int arg[64], i = 0, count = 0;
	unsigned int n = va_arg(arr, unsigned int);


	while (n)
	{
		arg[i] = n % 8;
		n = n / 8;
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
