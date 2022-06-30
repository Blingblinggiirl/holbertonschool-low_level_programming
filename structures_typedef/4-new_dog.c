#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *britney;
	int lenN = strlen(name), lenO = strlen(owner), i;

	/* Allocating memory */
	britney = malloc(sizeof(dog_t));
	if (britney == NULL)
	{
		free(britney);
		return (NULL);
	}
	britney->name = malloc(lenN + 1);
	if (britney->name == NULL)
	{
		free(britney->name);
		free(britney);
		return (NULL);
	}
	/* */
	britney->owner = malloc(lenO + 1);
	if (britney->owner == NULL)
	{
		free(britney->owner);
		free(britney->name);
		free(britney);
		return (NULL);
	}

	/* filling in info */
	for (i = 0; i < lenN; i++)
		britney->name[i] = name[i];
	britney->name[i] = '\0';

	for (i = 0; i < lenO; i++)
		britney->owner[i] = owner[i];
	britney->owner[i] = '\0';

	britney->age = age;
	return (britney);
}
