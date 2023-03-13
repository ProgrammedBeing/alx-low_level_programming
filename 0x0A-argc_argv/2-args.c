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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}
	return (0);
}
