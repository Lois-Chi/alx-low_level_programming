#include "main.h"
#include <string.h>

/**
 * *_strncat - concantenates two strings
 * @dest: destination parameter
 * @src: source code parameter
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
