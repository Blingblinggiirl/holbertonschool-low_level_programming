#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @r: valid to calculate
 * Return: the absolute value
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
