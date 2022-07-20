#include "main.h"
#include <math.h>

/**
 * _pow_recursion - prints the value of x raised to the power of y
 * @x: is the value of the integer
 * @y: is the power param
 * Return: 0, -1, or 1 based on a condition
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
