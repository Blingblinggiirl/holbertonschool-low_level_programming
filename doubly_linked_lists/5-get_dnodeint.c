#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to a doubly linked list
 * @index: index
 * Return: node, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	if (head)
	{
		while (current)
		{
			if (index == counter)
				return (current);

			current = current->next;
			counter++;
		}
	}
	return (NULL);
}
