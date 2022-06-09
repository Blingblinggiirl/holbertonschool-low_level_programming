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

/**
 * print_last_digit - function that prints the last digit of a number.
 * @o: last digit
 * Return: the value of the last digit
 */
int print_last_digit(int o)
{
	o = o % 10;

	_putchar(_abs(o) + 48);
	return (_abs(o));
}
