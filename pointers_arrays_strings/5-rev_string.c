#include "main.h"
/**
 * rev_string - unction that prints a string, in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int i, j;
	char aux[1024];

	i = 0;
	for (i = 0; s[i]; i++)
		continue;
	aux[i] = '\0';
	i = i - 1;

	for (j = 0; s[i]; i--)
		aux[j] = s[i], j++;
	for (i = 0; s[i]; i++)
		s[i] = aux[i];

	s[i] = '\0';
}
