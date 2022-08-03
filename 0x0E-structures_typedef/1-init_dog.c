#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable
 * @d: dog param
 * @name: char param
 * @age: float param
 * @owner: char param
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
