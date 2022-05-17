#include "main.h"
/**
 * hex_2 - a function that prints hexadecimal
 * @n: the decimal number to be printed as hexadecimal
 */

void hex_2(unsigned int n)
{
	int arr[64], i = 0;

	while (n)
	{
		arr[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		switch (arr[i])
		{
			case (10):
				_putchar('A');
				break;
			case (11):
				_putchar('B');
				break;
			case (12):
				_putchar('C');
				break;
			case (13):
				_putchar('D');
				break;
			case (14):
				_putchar('E');
				break;
			case (15):
				_putchar('F');
				break;
			default:
				_putchar('0' + arr[i]);
				break;
		}
		i--;
	}
}
