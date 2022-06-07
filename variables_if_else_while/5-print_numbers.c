#include <stdio.h>
/**
 * main - program which prints n starting from zero 'til nine
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
