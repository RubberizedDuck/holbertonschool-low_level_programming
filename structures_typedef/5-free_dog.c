#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - will free memory of dog
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	/* If true, returns nothing */
	if (d == NULL)
		return;

	/* Else frees the memory of pointer by structure of dog_t */
	free(d->name);
	free(d->owner);
	free(d);
}
