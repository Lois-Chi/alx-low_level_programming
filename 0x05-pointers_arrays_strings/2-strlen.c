#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: parameter
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	while (*(s + a) != 0)
	{
		a++;
	}
	return (a);
}
