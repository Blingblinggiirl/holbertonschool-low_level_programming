#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a LINKED LIST
 * @head: head to the linked list
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
