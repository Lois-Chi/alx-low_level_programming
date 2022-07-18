#include "main.h"
#include <string.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: s or null based on a condition
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
