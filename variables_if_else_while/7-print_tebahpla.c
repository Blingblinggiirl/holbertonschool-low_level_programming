#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar(10);
	return (0);
}
