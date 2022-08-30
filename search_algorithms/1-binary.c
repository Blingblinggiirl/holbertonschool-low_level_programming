#include "search_algos.h"

/**
 *binary_search - a function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: the index where value is located, - 1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, izquierda = 0, medio = 0, derecha = size - 1;

	if (!array || !size || !value)
		return (-1);

	while (izquierda <= derecha)
	{
		printf("Searching in array: ");
		for (i = izquierda; i < derecha; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[derecha]);

		medio = (izquierda + derecha) / 2;

		if (array[medio] == value)
			return (medio);

		if (value > array[medio])
		{
			izquierda = medio + 1;
		}
		else
			derecha = medio - 1;
	}
	return (-1);
}
