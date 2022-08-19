#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1 based on a condition
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	return (0);
}
