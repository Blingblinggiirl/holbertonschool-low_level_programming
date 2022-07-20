#include "main.h"
/**
 * get_bit - return a bit
 * @n: number
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
