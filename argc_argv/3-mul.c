#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplicates numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int x, y;


	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int z;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = (x * y);
		printf("%d\n", z);
		return (0);
	}
}
