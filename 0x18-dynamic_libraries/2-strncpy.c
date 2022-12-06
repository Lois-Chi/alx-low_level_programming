#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: destination parameter
 * @src: source parameter
 * @n: string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
