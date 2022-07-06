#include "main.h"

/**
 * main - prints the alphabets in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
