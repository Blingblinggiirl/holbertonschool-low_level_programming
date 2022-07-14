#include "lists.h"
/**
 * list_len - returns number of elements in a linked list.
 * @h: an struct
 * Return: number of elements listed.
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
