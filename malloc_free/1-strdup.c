#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: str
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int sperence = strlen(str);
	char *strcpy;

	if (str == NULL)
		return (NULL);
	strcpy = malloc((sizeof(char) * sperence));
	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i < sperence; i++)
		strcpy[i] = str[i];
	strcpy[i] = '\0';
	return (strcpy);

}
