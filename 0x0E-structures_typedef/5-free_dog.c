#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 * @d: pointer to a dog to be freed
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
