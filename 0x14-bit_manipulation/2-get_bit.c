#include "main.h"

/**
 * get_bit - returns the value of of a bit at a given index
 * @n: unsigned long int param
 * @index: index of the bit you want to get
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = n >> index;
	return (bit & 0x1);
}
