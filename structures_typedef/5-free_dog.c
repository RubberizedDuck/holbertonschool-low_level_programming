#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - will free memory of dog
 * @d: the dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
