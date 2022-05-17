#include "main.h"
/**
 *Description: this function converts and prints decimals
 *decimal
 *return: number
*/
void deci(int n)
{
	int arr[64], i = 0;
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
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
