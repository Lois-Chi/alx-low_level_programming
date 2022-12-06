#include "main.h"

/**
 * *_memset - fills the memory with a constant byte
 * @s: string parameter
 * @b: constant byte
 * @n: bytes of memory area pointed by s
 * Return: to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
