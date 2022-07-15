#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - sum LINKED LIST
 * @head: head to the linked list.
 * @n: data of list.
 * @idx: index.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list_elements, *list_elements_aux;
	unsigned int counter = 0;

	list_elements = malloc(sizeof(listint_t));
	if (!list_elements)
		return (NULL);
	list_elements->n = n;
	if (idx == 0)
	{
		list_elements->next = *head;
		*head = list_elements;
		return (list_elements);
	}
	while (counter < (idx - 1) && list_elements_aux)
	{
		if (list_elements_aux->next == NULL)
			return (NULL);
		counter++;
		list_elements_aux = list_elements_aux->next;
	}
	list_elements->next = list_elements_aux->next;
	list_elements_aux->next = list_elements;
	return (list_elements);
}
