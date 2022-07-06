#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
