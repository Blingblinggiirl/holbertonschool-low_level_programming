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
	char *buffer = NULL;

	if (!s1 && !s2)
		return (NULL);
	sum = strlen(s1) + strlen(s2);
	buffer = malloc(sum + 1);
	if (buffer == NULL)
		return (NULL);
	while (i + j < sum)
	{
		if (s1[i])
			buffer[i] = s1[i], i++;
		if (!s1[i] && s2[j])
			buffer[i + j] = s2[j], j++;
	}
	buffer[i + j] = '\0';
	return (buffer);
}
