#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of memory elements.
 * @size: size of elements.
 * Return: array or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *sperence;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	sperence = malloc(nmemb * size);
	if (sperence == NULL)
		return (NULL);
	memset(sperence, 0, nmemb * size);
	return (sperence);
}
