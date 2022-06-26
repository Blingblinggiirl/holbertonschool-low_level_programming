#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum.
 * @max: maximum.
 * Return: array or NULL.
 */
int *array_range(int min, int max)
{
	int *sperence;
	int length, i;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	sperence = malloc(length * sizeof(int));
	if (sperence == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		sperence[i] = min;
	return (sperence);
}
