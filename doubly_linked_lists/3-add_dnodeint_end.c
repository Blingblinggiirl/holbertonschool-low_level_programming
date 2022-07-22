#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: pointer pointing to a double linked list
 * @n: counter
 * Return: the addres of the new element, NULL otherwise.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *actual_list = NULL;

	list = malloc(sizeof(list));

	if (!list)
		return (NULL);

	list->n = n;

	if (*head)
	{

		actual_list = *head;

		while (actual_list->next != NULL)
			actual_list = actual_list->next;

		list->next = NULL;
		list->prev = actual_list;
		actual_list->next = list;

		return (list);
	}

	list->next = *head;
	list->prev = NULL;
	*head = list;
	return (*head);
}
