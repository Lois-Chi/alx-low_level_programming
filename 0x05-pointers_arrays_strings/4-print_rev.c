#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: a parameter
 */
void print_rev(char *s)
{
	int a, n;

	n = strlen(s);
	for (a = n - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
