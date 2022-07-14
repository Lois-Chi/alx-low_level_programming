#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src:
 * @dest:
 * Return: Destination
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, a;
	
	while (dest[len])
		len++;
	for (a = 0; src[a] != 0; a++)
	{
		dest[len] = src[len];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
