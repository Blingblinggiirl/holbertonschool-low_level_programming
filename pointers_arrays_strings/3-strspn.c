#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s:  the number of bytes in the initial segment of
 * @accept: where be have the bytes
 * Return:bytes in the initial segment of @s, only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int fors;
	int fora;
	unsigned int res = 0;

	for (fors = 0; fors <= 5; fors++)
	{
		for (fora = 0; accept[fora]; fora++)
		{
			if (s[fors] == accept[fora])
			{
				res++;
			}
		}
	}
	return (res);
}
