#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size
 * @c: char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *rom;
	unsigned int i;

	if (size == 0)
		return (NULL);

	rom = malloc((sizeof(char) * size);

	if (rom == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		rom[i] = c;
	return (rom);
}

