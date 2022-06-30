#include "dog.h"
#include <stdlib.h>
/**
 * fre_dog - free memoru allocation of the structure dog
 * @d: dog
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
