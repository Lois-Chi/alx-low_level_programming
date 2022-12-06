#include "main.h"
#include <string.h>

/**
 * *_memcpy - copied a memory area
 * @dest: dest memory area
 * @src: src memory area
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
