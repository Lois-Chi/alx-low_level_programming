#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int param
 * @index: index of the bit you want to set
 * Return: 1 at success and -1 at error
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 64)
		return (-1);
	*n += 1 << index;
	return (1);
}
