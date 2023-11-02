#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - Entry point.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Description: appends text at the end of a file.
 *
 * Return: Return 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytesWrite, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_APPEND | O_WRONLY);
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
	return (1);
}
