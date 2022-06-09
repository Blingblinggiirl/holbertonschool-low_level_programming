#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: value to check
 * Return: 1 if is greater than zero, 0 if is zero. otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
