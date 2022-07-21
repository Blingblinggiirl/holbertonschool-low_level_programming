#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * main - entry point
 * @ac: arg count
 * @av: arg info 
 * Return: 97, 98, 99
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit (97);
	}
	copy_text(av[1], av[2]);
	exit(0);
}
/**
 * copy_text - copy text 
 * @from: file raiz
 * @to: file destino
 */
void copy_text(const char *from, const char *to)
{
	int file_from, file_to, r = 1024, wr;
	char *count[1024]
	mode_t modsie = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_from = open(from, O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);

	file_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, modsie);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	r = read(file_from, count, 5555);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	wr = write(file_to, count, r);
	if (wr == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
} 
