#include <stdio.h>
/**
 * main - program that prints all the numbers of base sixteen in lowercase.
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			n = 48;
		else
			n = 87;
		putchar (i + n);
	}
	putchar (10);
	return (0);
}
