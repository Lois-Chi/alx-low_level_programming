#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer param
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int u = 1;

	u <<= 63;
	if (n == 0)
		_putchar('0');
	while (u > 0)
	{
		if ((n & u) == 0 && i == 1)
			_putchar('0');
		if ((n & u) != 0)
		{
			_putchar('1');
			i = 1;
		}
		u = u >> 1;
	}
}
