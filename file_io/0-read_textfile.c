#include "main.h"
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the posix
 * @filename: name of the file
 * @letters: numbers of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, letters);
	w = write(1, buffer, r);
	if (w == -1 || r == -1 || w != r)
		return (0);

	return (w);
}
