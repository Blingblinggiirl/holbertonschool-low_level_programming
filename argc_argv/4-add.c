#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add
 * @argc : argc
 * @argv : argv
 * Return: add
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc == 0)
		printf("0\n");

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}


	for (x = 0, z = 0; argv[x]; x++)
		z += atoi(argv[x]);

	printf("%d\n", z);
	return (0);
}
