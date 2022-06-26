#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid.
 * @height: height of grid.
 * Return: array or null.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **sperence;

	if (width <= 0 || height <= 0)
		return (NULL);
	sperence = malloc(height * sizeof(int *));
	if (sperence == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		sperence[i] = malloc(width * sizeof(int));
		if (sperence[i] == NULL)
		{
			for (; i >= 0; i--)
				free(sperence[i]);
			free(sperence);
			return(NULL);
		}
		for (j = 0; j < width; j++)
			sperence[i][j] = 0;
	}
	return (sperence);
}
