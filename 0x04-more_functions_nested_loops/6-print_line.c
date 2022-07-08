#include "main.h"

/**
 * print_line - shows the number of times a character should be printed
 * @n: is a parameter
 * the line should end with \n
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(95);
		_putchar('\n');
	}
}
