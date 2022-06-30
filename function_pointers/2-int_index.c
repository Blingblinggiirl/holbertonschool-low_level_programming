#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array
 *@size: size
 *@cmp: pointer to function to compare
 *Return: i otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) == 1)
				return (i);
	}
	return (-1);
}
