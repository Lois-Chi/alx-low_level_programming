#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - creates new dog
 * @name: char param
 * @age: float param
 * @owner: char param
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	char *p, *q;

	struct dog *new_dog;

	i = 0;
	j = 0;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	q = malloc(sizeof(char) * j + 1);
	if (q == NULL)
	{
		free(new_dog);
		free(p);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		p[k] = name[k];
	for (k = 0; k <= j; k++)
		q[k] = owner[k];
	new_dog->name = p;
	new_dog->age = age;
	new_dog->owner = q;
	return (new_dog);
}
