#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory allocation of dog pointer
 * @d: struct var to free
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	if (d != NULL)
	{
		free(d);
	}
}
