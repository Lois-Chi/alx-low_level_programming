#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of the string
 * @s: parameter
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	for(; *s != '\0' ; s++)
	{
		len += 1;
	}
	return (len);
}
