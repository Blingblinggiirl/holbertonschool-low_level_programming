#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function locates a character in a string
 * @s: string 
 * @c: char
 * Return: @c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
