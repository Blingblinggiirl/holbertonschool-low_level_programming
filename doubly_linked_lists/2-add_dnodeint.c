#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer pointing to a linked list
 * @n: n
 * Return: the adress of the new element, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
		return (NULL);

	list->n = n;

	if (*head)
	{
		list->next = *head;
		list->prev = (*head)->prev;
		(*head)->prev = list;
		*head = list;

		return (*head);
	}
	list->next = *head;
	list->prev = NULL;
	*head = list;

	return (*head);
}
