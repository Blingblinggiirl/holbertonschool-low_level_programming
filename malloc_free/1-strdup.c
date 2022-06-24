#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: str
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int sperence;
	char *strcpy;

	if (str == NULL)
		return (NULL);
	sperence = strlen(str);
	strcpy = malloc((sizeof(char) * sperence) + 1);
	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i < sperence; i++)
		strcpy[i] = str[i];
	strcpy[i] = '\0';
	return (strcpy);

}
