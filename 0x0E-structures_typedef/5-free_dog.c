#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory allocation of dog pointer
 * @d: struct var to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
