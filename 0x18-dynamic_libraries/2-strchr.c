#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in a string
 * @s: string parameter
 * @c: character in the string
 * Return: to c if character is found or null if character is not found
 */
char *_strchr(char *s, char c)
{
	int z;

	while (1)
	{
		z = *s++;
		if (z == c)
		{
			return (s - 1);
		}
		if (z == 0)
		{
			return (NULL);
		}
	}
}
