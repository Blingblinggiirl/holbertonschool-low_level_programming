#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to a doubly linked list
 * Return: numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
