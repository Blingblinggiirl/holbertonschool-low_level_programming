#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_list - print elements of a list_t
 *@h : head node to the liked list
 *Return: Number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%i] ", h->len);
			printf("%s", h->str);
		}
		printf("\n");
		h = h->next;
		counter++;
	}
	return (counter);
}
