#include "main.h"

/**
 * _isalpha - checks if it is uppercase or lowercase
 * @c: is a character
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
