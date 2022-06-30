#include "function_pointers.h"
/**
 * array_iterator - a
 * given as a parameter on each element array
 *@size: size
 *@action: action
 *@array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
