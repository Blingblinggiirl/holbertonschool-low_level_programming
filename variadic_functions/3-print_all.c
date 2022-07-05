#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: format
 * Return: ap
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, correct_format;
	char *pp;

	va_start(ap, format);

	while (format && format[i])
	{
		correct_format = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				pp = va_arg(ap, char*);
				if (pp)
				{
					printf("%s", pp);
					break;
				}
				printf("(nil)");
				break;
			default:
				correct_format = 0;
				break;
		}
		if (format[i + 1] && correct_format)
		{
			printf("%s", ", ");
		}
		i++;
	}
	printf("\n");
}
