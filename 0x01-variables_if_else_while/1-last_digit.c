#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n)
if (n > 5)
{
	printf("Last digit 0f %d is and greater than 5");
}
if (n == 0)
{
	printf("Last digit of %d is and is 0");
}
if (n < 6 && n != 0)
{
	printf("Last digit of %d is and less than 6 not 0");
}
printf("\n");

return (0);
}
