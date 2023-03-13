#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: command line count
 * @argv: a pointer to strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
