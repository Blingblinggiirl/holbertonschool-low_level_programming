#include "lists.h"
/**
 * insert_dnodeint_at_index - adds node at the index of a doubly linked list
 * @h: pointer pointing to a linked list
 * @idx: index
 * @n: content
 * Return: the address, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list = malloc(sizeof(dlistint_t)), *actual_list = NULL;
	unsigned int len = dlistint_len(*h), counter = 0;

	if (NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint_end(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));
	actual_list = *h;

	while (actual_list)
	{
		if (idx == counter)

		{
			list->n = n;
			list->next = actual_list;
			list->prev = actual_list->prev;
			actual_list->prev = list;
			actual_list = list;
			actual_list->prev->next = list;
			return (list);
		}
		actual_list = actual_list->next;
		counter++;
	}
	return (actual_list);

}
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
