#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum LINKED LIST
 * @head: head to the linked list
 * Return: if the list is empty, return 0.
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
