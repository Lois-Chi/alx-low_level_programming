#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: unsigned long int param
 * @index: index of the bit to be set
 * Return: 1 at success, -1 at error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
