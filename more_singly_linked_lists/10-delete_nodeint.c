#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node index of a listint_t linked list.
 * @head: head of a linked list
 * @index: index
 * Return: list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list_elements, *list_elements_aux = *head;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(list_elements_aux);
		return (1);
	}
	while (counter < (index - 1) && list_elements_aux)
	{
		if (list_elements_aux->next == NULL)
			return (-1);
		counter++;
		list_elements_aux = list_elements_aux->next;
	}
	list_elements = list_elements_aux->next;
	list_elements_aux->next = list_elements->next;
	free(list_elements);
	return (1);
}
