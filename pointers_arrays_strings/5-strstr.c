#include "main.h"
/**
 *_strstr - locates a substrin
 * @haystack: the longer string to search
 * @needle: the substring to search for
 * Return: pointer to the beginning of the located substring, or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
