#include <stdio.h>
#include "main.h"

/**
 * main - all arguments should be printed, including the first one
 * only one argument per line, followed by a new line
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
