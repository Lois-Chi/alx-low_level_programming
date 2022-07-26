#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of an integer
 * @c: character param
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	
	s = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
