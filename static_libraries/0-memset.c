#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to memory area to fill
 * @b: bytes
 * @n: n bytes to fill
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}
	return (s);
}
