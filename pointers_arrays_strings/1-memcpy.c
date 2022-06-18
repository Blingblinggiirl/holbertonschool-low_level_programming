#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: source for memory
 * @dest: destination of memory
 * @n: number of bytes
 * Return: @src in @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
