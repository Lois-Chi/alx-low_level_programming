#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: parameter
 */
void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
		b = a / 2 + 1;
	else
		b = a / 2;
	for (c = b; c < a; c++)
		_putchar(str[c]);
	_putchar('\n');
}
