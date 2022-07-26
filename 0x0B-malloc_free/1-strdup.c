#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string param
 * Return: to pointer of the duplicated string
 */
char *_strdup(char *str)
{
	char  *s;
	unsigned int a, len;

	a = 0;
	len = 0;

	if (str == 0)
		return (NULL);
	while (str[len])
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while ((s[a] = str[a]) != '\0')
		a++;
	return (s);
}
