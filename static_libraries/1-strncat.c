#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @src: source
 * @dest: destination
 * @n: n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i]; i++)
	;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
