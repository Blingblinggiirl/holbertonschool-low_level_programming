#include "main.h"
#include <stddef.h>
/**
 * binary_to_unit - converts a binary to an unsigned int
 * @b: string char
 * Return: value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	return (value);
}
