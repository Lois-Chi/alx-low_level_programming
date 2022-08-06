#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_memset -> this function allocates memory of an array
 * @s: string param
 * @b: char param
 * @n: unsigned int param
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates a memry for an array
 * @nmemb: number of elemnts
 * @size: number of bytes
 * Return: to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
