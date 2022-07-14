#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a list
 *@head: Pointer pointing to a linked list
 *@str: string
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *aux;

	new_node = malloc(sizeof(list_t));
		if (!new_node)
			return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head)
	{
		aux = *head;
		while (aux && aux->next)
			aux = aux->next;
		aux->next = new_node;
	}
	else
	{
		*head = new_node;
		return (new_node);
	}

	return (new_node);
}
