#include "main.h"
#include <stdio.h>
/**
 * print_rev - unction that prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	for (i = 0; s[i]; i++)
		continue;
	i = i - 1;

	for (; s[i]; i--)
		_putchar(s[i]);
	_putchar(10);
}
