#include <stdio.h>

/**
 * main - print all digit numbers of base 10
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
