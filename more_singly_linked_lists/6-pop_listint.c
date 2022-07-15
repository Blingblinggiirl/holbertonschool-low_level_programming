#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - free a head node of LINKED LIST
 * @head: head to the linked list
 * Return: 
 */
int pop_listint(listint_t **head)
{
	listint_t *list_to_free2;
	int i = 0;

	if (!head)
		return (0);

	list_to_free2 = *head;
	i = (*head)->n;
	*head = list_to_free2->next;
	free(list_to_free2);
	return (i);
}
