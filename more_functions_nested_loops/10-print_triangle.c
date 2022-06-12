#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, z = 0;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		z++;
		for (j = 0; j < size; j++)
		{
			if (j < size - z)
				_putchar(32);
			else
				_putchar(35);
		}
		_putchar(10);
	}

}
