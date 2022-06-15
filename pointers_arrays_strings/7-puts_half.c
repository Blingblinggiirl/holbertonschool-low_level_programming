#include "main.h"
/**
* puts_half - prints half of the  string
* @str: entire string
*/
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i])
		i++;
	if (i % 2 != 0)
	{
		for (n = (i / 2) + 1; str[n]; n++)
			_putchar(str[n]);
	}
	if (i % 2 == 0)
	{
		for (n = i / 2; str[n]; n++)
			_putchar(str[n]);
	}
	_putchar(10);
}
