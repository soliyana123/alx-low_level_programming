#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a funtion that frees dog
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}

}
