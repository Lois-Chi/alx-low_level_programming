#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: parameter 1
 * @accept: parameter
 * Return: number of bytes in the initial segment of s which consists of bytes of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0, z, t = 0;

	while (accept[z])
	{
		z = 0;
		while (s[z] !=32)
		{
			if (accept[y] == s[z])
			{
				t++;
			}
			z++;
		}
		y++;
	}
	return (t);
}
