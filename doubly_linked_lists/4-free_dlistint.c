#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_list = head, *next_list = NULL;

	while (current_list)
	{
		next_list = current_list->next;
		free(current_list);
		current_list = next_list;
	}
}
