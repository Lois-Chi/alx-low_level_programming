#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: parameter
 */
void puts2(char *str)
{
	int len, a;

	len = strlen(str);
	for (a = 0; a < len; a += 2)
		_putchar(str[a]);
	_putchar('\n');
}
