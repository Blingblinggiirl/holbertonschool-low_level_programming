#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an array
 * @size: size
 * @c: char
 * Return: array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
