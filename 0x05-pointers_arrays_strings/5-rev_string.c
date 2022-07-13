#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 */
void rev_string(char *s)
{
	char tmp;
	int a, length1, length2;

	length1 = 0;
	length2 = 0;
	while (s[length1] != '\0')
		length1++;
	length2 = length1 - 1;
	for (a = 0; a < length1 / 2; a++)
	{
		tmp = s[a];
		s[a] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
