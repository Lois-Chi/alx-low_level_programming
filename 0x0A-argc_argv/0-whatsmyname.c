#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program followed by a new line
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
