#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: amount.
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sperence;
	unsigned int sum = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s1) > 0)
		sum += strlen(s1);
	if (strlen(s2) > 0)
	{
		if (n > strlen(s2))
			sum += strlen(s2);
		else
			sum += n;
	}
	sum++;
	sperence = malloc(sum * sizeof(char) + 5);
	if (sperence == NULL)
		return (NULL);
	if (strlen(s1) > 0 || s1 != NULL)
	{
		for (; s1[i]; i++)
			sperence[i] = s1[i];
	}
	if (strlen(s2) > 0 || s2 != NULL)
	{
		if (n > strlen(s2))
			for (; s2[j]; i++, j++)
				sperence[i] = s2[j];
		else
			for (; j < n; i++, j++)
				sperence[i] = s2[j];
	}
	sperence[i] = '\0';
	return (sperence);
}
