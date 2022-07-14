#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds nodes
 * @head: Pointer pointig to a linked list
 * @n: elements
 * Return: a pointer to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_elements;
	int counter;

	counter = n;

	list_elements = malloc(sizeof(listint_t));

	if (!list_elements)
		return (NULL);

	list_elements->n = counter;
	list_elements->next = (*head);
	(*head) = list_elements;

	return (*head);
}
