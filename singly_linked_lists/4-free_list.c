#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list
 * @head : Pointer to linked list
 */
void free_list(list_t *head)
{
	list_t *freelist;

	while ((freelist = head))
	{
		if (freelist->str)
			free(freelist->str);
		head = head->next;
		free(freelist);
	}
}
