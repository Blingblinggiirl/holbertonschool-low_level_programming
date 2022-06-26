#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: s1
 *@s2: s2
 * Return: the concatenation
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int sum;
	char *buffer;

	if (s1 != NULL && s2 == NULL)
		sum = strlen(s1);
	if (s1 == NULL && s2 != NULL)
		sum = strlen(s2);
	if (s1 != NULL && s2 != NULL)
		sum = (strlen(s1) + strlen(s2));
	sum += 1;
	buffer = malloc(sum);
	if (buffer == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			buffer[j] = s1[i];
			j++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
		{
			buffer[j] = s2[i];
			j++;
		}
	}
	buffer[j] = '\0';
	return (buffer);
}
