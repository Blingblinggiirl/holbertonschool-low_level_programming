#include "lists.h"
/**
 * print_dlistint - prints all the ellements of a doubly linked list
 * @h: pointer to a doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
