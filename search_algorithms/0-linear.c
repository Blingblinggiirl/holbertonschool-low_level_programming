#include "search_algos.h"
/**
 *linear_search - a function that searches for a value in an
 *array of integers using the Linear search
 *@array: is a pointer to the first element of the array to search
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: the first index where value is located, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array || !size || !value)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
