#include "main.h"
/**
 * is_delimiter - tells if a char is a delimiter
 * @c: char
 * Return: 1 if success otherwise 0
 */
int is_delimiter(char c)
{
	char delimit[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (delimit[i])
	{
		if (delimit[i] == c)
		{
			return (1);
		}
	i++;
	}
	return (0);
}
/**
 * capitalize - capitalizes chars lowercase
 * @c: char
 * Return: c
 */
char capitalize(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: variable
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0)
			s[i] = capitalize(s[i]);
		else
		{
			if (is_delimiter(s[i - 1]) == 1)
				s[i] = capitalize(s[i]);
		}
		i++;
	}
	return (s);
}
