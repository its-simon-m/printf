#include "main.h"
/**
 * octa - a function that prints octa-decimal number
 * @n: the decimal number to be printed as an octa
 */

void octa(unsigned int n)
{
	int arr[64], i = 0;


	while (n)
	{
		arr[i] = n % 8;
		n = n / 8;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar('0' + arr[i]);
		i--;
	}
}
