#include "main.h"
/**
 * _pow_recursion - returns the valueof x to the power of y
 * @x: first value
 * @y: second value
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
