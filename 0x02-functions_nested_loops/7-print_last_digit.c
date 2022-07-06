#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: ia an integer
 * Return: to the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		n = -n;

	_putchar(x + '0');
	return (x);
}
