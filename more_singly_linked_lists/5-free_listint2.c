#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a LINKED LIST
 * @head: head to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *list_to_free2;

	if (!head)
		return;
	while (*head)
	{
		list_to_free2 = (*head);
		*head = (*head)->next;
		free(list_to_free2);
	}
	head = NULL;
}
