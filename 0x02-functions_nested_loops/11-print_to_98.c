#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * must be separated by a comma and space
 * followed by a new line
 * @n: a number
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = 0; a <= 98; a++)
		{
			if (a != 98)

				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; n >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
