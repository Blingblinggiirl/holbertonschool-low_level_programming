#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a linked list
 * @head: head to th single linked list
 */
void free_listint(listint_t *head)
{
	listint_t *list_to_free;

	while (head)

	{
		list_to_free = head;
		head = head->next;
		free(list_to_free);
	}
	head = NULL;
}
