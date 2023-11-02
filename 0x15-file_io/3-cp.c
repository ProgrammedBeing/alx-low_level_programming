#include <stdio.h>
#include "main.h"
/**
 * error_file - checks if files can be opened.
 * @fd_source: fd_source
 * @fd_dest: fd source
 * @av: argument vector.
 * Return: no return/
 */
void error_file(int fd_source, int fd_dest, char **av)
{

	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - Entry point.
 * @argc: Argument counter.
 * @av: Argument vector.
 *
 * Description: copies the content of a file to another file.
 *
 * Return: Return 0 if successful.
 */
int main(int argc, char **av)
{
	int fd_source, fd_dest;
	char buffer[1024];
	ssize_t n;
	const char *file_from = av[1];
	const char *file_to = av[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", message);
		exit(97);
	}
	fd_source = open(file_from, O_RDONLY);
	fd_dest = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_file(fd_source, fd_dest, av);
	while ((n = read(fd_source, buffer, 1024)) > 0)
	{
		if (write(fd_dest, buffer, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
