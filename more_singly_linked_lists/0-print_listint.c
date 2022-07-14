#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all the elements of a list
 * @h: header linked list
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
