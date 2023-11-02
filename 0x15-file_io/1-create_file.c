#include <stdio.h>
#include "main.h"
/**
 * create_file - Entry point.
 * @filename: name of file
 * @text_content: null terminated string to write to the file.
 *
 * Description: creates a file.
 *
 * Return: Returns 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length = 0;
	int bytesWrite;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[length])
		length++;

	bytesWrite = write(fd, text_content, length);
	if (bytesWrite == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
