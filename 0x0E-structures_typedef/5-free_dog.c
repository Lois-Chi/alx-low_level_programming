#include "dog.h"
/**
 * free_dog - frees the memory allocated
 * @d: dog_t param
 */
void free_dog(dog_t *d)
{
	if (d != NULL)

	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
