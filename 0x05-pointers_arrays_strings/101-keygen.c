#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	srand(time(NULL));
	for (b = 0, c = 2772; c > 122; b++)
	{
		a = (rand() % 125) + 1;
		printf("%c", a);
		c -= a;
	}
	printf("%c", c);
	return (0);
}
