#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - this function prints a name
 * @name: character to be printed
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
