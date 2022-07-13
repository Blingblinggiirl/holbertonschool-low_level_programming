#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_list - print elements of a list_t 
 *
 *Return: Number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int counter;
	char *str = 0;
	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("%i", len);
			printf("%s", str);
		}
		h = h->next;
		counter++;
	}
	return(counter);
}
