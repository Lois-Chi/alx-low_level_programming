#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts b from a
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of the a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a and b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - prints the remainder of the division of a by b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
