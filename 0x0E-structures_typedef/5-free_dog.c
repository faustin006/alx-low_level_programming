#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees a dog
 * @d: pointer to the dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
