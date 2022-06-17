#include "main.h"
/* _strcmp - function that compares two strings.
 * @s1: first pointer
 * @s2: second pointer
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if ((s1[i]) != (s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i])
		return (s2[i]);
	return (0);
}
