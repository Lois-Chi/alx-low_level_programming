#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: integer param
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - natural square root
 * @a: parameter
 * @n: integer
 * Return: an integer
 */
int _sqrt(int n, int a)
{
	int square = a * a;

	if (square > n)
		return (-1);
	if (square == n)
		return (a);
	return (_sqrt(n, a + 1));
}
