#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: name
 *@f: a pointer that acepts functions to pointers to char
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
