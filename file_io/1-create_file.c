#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: string that will have the text content
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | )
}
