#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @unsigned int: size of an integer
 * @char: character param
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc (size * sizeof(char));
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
