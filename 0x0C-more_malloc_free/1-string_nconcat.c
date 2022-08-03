#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string param 1
 * @s2: string param 2
 * @n: integer param
 * Return: to a pointer
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;


	i = 0, l = 0;
	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + l) != '\0')
		l++;
	if (n >= l)
		n = l;
	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
			p[j] = s1[j];
		else
			p[j] = s2[k++];
	}
	p[j] = '\0';
	return (p);
}
