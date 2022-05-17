#include "main.h"
/**
 *convert_to - convert numbers
 *Description: This function convert numbers to other formats
 *decimal, octal, hexadecimal, binary etc..
 *Return number into char pointer
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
