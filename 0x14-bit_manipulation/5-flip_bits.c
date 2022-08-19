#include "main.h"


/**
 * flip_bits - returns the number you need to flip to get from
 * one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z;

	z = 0;
	n = n ^ m;
	while (n)
	{
		z += n & 1;
		n >>= 1;
	}
	return (z);
}
