#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type
 * @d: d
 * @name: name of the dog
 * @age: age of the dogo
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
