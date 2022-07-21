#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - prints an input integer
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - prints a prime number
 * @n: an integer
 * @a: iteration
 * Return: 0 or 1
 */
int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (check_prime(n, a + 1));
}
