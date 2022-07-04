#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @n: n
 * @separator: printed between strings
 * Return: ap
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *pp;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		pp = va_arg(ap, char*);
		printf("%s", pp ? pp : "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
