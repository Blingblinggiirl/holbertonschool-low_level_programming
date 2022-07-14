#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a node to th end of a linked list
 * @head: head of a linked list
 * @n: n
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *listint_add, *listint_aux;

	if (!head)
		return (NULL);
	listint_add = malloc(sizeof(listint_t));

	if (!listint_add)
		return (NULL);
	else if (!(*head))
		*head = listint_add;
	else
	{
		listint_aux = *head;
		while (listint_aux->next != NULL)
			listint_aux = listint_aux->next;
		listint_aux->next = listint_add;
	}
	listint_add->next = NULL;
	listint_add->n = n;
	return (listint_add);
}
