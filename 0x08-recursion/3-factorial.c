#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: integer param
 * Return: -1, 0 or 1 based on a condition
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial (n - 1));
}
