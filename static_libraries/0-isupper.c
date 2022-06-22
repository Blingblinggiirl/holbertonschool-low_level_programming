#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: char to check
 * Return: 1 if is true. otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
