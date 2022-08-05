#include  "variadic_functions.h"

/**
 * sum_them_all - sums all of the parameters
 * @n: constant
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int a;

	a = 0;
	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);
	while (a < n)
	{
		sum = sum + va_arg(num, int);
		a++;
	}
	va_end(num);
	return (sum);
}
