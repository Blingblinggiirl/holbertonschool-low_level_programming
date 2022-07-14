#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: header node to linked list
 *Return: number of elemnts
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		num_of_elements++;
		h = h->next;
	}

	return (num_of_elements);
}
