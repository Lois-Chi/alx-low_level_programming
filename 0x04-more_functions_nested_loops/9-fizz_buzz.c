#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 0 to 100
 * followed by a new line
 * multiples of 3 prints Fizz and multiples of 5 prints Buzz
 * multiples of both 3 and 6 prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");
	return (0);
}

