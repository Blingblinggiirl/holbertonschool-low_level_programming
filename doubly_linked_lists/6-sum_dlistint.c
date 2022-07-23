#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a doublylinked list
 * @head: pointer poiting to a doubly linked list
 * Return: node, NULL otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int counter = 0;

	if (head)
	{
		while (list)
		{
			counter = counter + list->n;
			list = list->next;
		}
	}
	return (counter);
}
