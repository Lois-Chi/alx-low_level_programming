#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _strlen - string length
 * @s: string param
 * Return: length of the string
 */
int _strlen(char *s)
{
	int d;

	d = 0;
	while (*(s + d) != 0)
	{
		d++;
	}
	return (d);
}
/**
 * _isdigit - checks if it is a digit
 * @c: integer param
 * Return: 0 or 1
 */
int _isdigit(char *c)
{
	int o;

	o = 0;
	while (*(c + o) != '\0')
	{
		if (*(c + o) < '0' || *(c + o) > '9')
			return (0);
		o++;
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p, res, len, n1, n2, i, j;
	int *total;

	if (argc < 3 || argc > 3 || !(_isdigit(argv[1])) || !(_isdigit(argv[2])))
		puts("Error"), exit(98);
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	n1 = _strlen(argv[1]), n2 = _strlen(argv[2]);
	len = n1 + n2;
	total = calloc(len, sizeof(int *));
	if (total == NULL)
		puts("Error"), exit(98);
	for (i = (n2 - 1); i > -1; i--)
	{
		res = 0;
		for (j = (n1 - 1); j > -1; j--)
		{
			p = (argv[2][i] - '0') * (argv[1][j] - '0');
			res =  (p / 10);
			total[(i + j) + 1] += (p % 10);
			if (total[(i + j) + 1] > 9)
			{
				total[i + j] += total[(i + j) + 1] / 10;
				total[(i + j) + 1] = total[(i + j) + 1] % 10;
			}
			total[(i + j)] += res;
		}
	}
	if (total[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < len; i++)
		printf("%d", total[i]);
	printf("\n");
	free(total);
	return (0);
}
