#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a list
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *aux;
	new_node = malloc(sizeof(list_t));
	
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	*head = new_node;
	if (!(*head))
	{
		printf("en caso borde head = %s\n", (*head)->str);
		*head = new_node;
		return (new_node);
	}
	else
		aux = *head;

	while (aux->next)
	{
		printf("nodo actual %s\n", aux->str);
		aux = aux->next;
	}
	aux->next = new_node;
	return (new_node);
}
