#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node to index.
 * @head: head to the linked list
 * @index: index of the node, starting at 0.
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
