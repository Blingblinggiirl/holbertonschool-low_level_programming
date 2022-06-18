#include "main.h"
/**
 * leet - encodes a string in 1337
 * @s: string
 * Return: the value of s
 */
char *leet(char *s)
{
	int i = 0, j;
	char let[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (s[i])
	{
		j = 0;
		while (let[j])
		{
			if (s[i] == let[j] || s[i] == (let[j] + 32))
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
