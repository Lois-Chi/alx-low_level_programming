#include "main.h"
#include <string.h>

/**
 * *_strcat - appends the src string to dest string
 * @dest: 
 * @src:
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, a;

	while (dest[len])
		len++;
	for (a = 0; src[a] != 0; a++)
	{
		dest[len] = src[a];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
