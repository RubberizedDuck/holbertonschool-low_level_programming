#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of dog structure
 * @d: Pointer to start the structure
 * @name: Name of the dog stored in a char array
 * @age: Dogs age in float form
 * @owner: Name of the dogs owner store in char array
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
