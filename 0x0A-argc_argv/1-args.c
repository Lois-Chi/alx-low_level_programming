#include <stdio.h>
#include "main.h"

/**
 * main - print a number followed by a new line
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
