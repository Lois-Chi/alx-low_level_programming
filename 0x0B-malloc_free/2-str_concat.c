#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	c = a + b;
	s = (char *)malloc(c * sizeof(char) + 1);
	if (s == NULL)
	return (NULL);
	b = 0;
	while (d < c)
	{
		if (d < a)
			s[d] = s1[d];
		if (d >= a)
		{
			s[d] = s2[b];
			b++;
		}
		d++;
	}
	s[d] = '\0';
	return (s);
}
