#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			else
			{
				_putchar((n % 10) + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				if (n < 9)
					_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(10);
		}
	}
}
