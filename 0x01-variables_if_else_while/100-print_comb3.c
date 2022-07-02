#include <stdio.h>

/**
 * main - print all possible combinations of two digits
 * followed by a space
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (m = 49; m <= 57; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
