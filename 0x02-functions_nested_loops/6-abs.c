#include "main.h"

/**
 * _abs - returns absolute value of a number
 * @n: parameter
 * Return: absolute value of a number
 */
int _abs(n)
{
	if (n > 0)
		n = -n;
	return (n);
