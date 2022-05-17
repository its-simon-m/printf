#include "main.h"

int p_str(char *s)
{
	int count = 0;
	if (*s)
	{
		while (*s)
		{
			_putchar(*s);
			s++;
			count++;
		}
		return (count);
	}
	else
	{
		s = "null";
		while(*s)
		{
			_putchar(*s);
			s++;
		}
		return (0);
       	}
}
