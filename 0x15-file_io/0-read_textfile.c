#include <stdio.h>
#include "main.h"
/**
 * read_textfile - Entry point.
 * @filename: Pointer to text file.
 * @letters: Number of letters to be printed.
 *
 * Description: reads a text file and prints it to the POSIX standard output.
 *
 * Return: Return the actual number of letters it coukd read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
       	ssize_t bytesRead, bytesWrite;
	char *ptr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr = malloc(letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, ptr, letters);
	if (bytesRead == -1)
	{
		close(fd);
		free(ptr);
		return (0);
	}

	bytesWrite = write(STDOUT_FILENO, ptr, bytesRead);
	if (bytesWrite == -1 || bytesWrite != bytesRead)
	{
		close(fd);
		free(ptr);
		return (0);
	}
	close(fd);
	free(ptr);
	return (bytesWrite);
}
