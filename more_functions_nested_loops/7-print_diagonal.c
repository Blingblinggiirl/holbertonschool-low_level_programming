#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n : number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
				_putchar(92);
			else
				_putchar(32);
		}
	_putchar(10);
	}
}
