#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes.
 * Return: array
 */
void *malloc_checked(unsigned int b)
{
	int *sperence;

	sperence = malloc(b);
	if (sperence == NULL)
	{
		free(sperence);
		exit(98);
	}
	return (sperence);
}
