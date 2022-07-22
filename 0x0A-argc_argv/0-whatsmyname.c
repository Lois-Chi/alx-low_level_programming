#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program followed by a new line
 * @argc: argument count
 * @argv: argument variable
 * Retun: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
