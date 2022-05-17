#include "main.h"
/**
 * unsi - a fucntion that prints unsigned decimals (in base 10)
 * @n: an unsigned integer to be turned to base 10
 */

void unsi(unsigned int n)
{
	int arr[64], i = 0;

	while (n)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar('0' + arr[i]);
		i--;
	}
}
