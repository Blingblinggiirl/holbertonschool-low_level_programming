#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start of iteration
 */
void print_to_98(int n)
{
	int i;

	while (n != 98)
	{
		if (n < 0)
		{
			i = -n;
			_putchar('-');
		}
		else
			i = n;
		if (i < 10)
		{
			_putchar((i % 10) + 48);
		}
		else if (i < 100)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		else
		{
			_putchar((i / 100) + 48);
			_putchar(((i / 10) % 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
	_putchar(10);
}
