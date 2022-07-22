#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication, followed by a new line
 * assuming that the two numbers and results can be stored as integers
 * @argv: argument variable
 * @argc: argument count
 * Return: 0 or 1 based on a condition
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
