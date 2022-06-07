#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase q and e are forbiden
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar(10);
	return (0);
}
