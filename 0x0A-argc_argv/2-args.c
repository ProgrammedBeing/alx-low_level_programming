#include <stdio.h>
#include "main.h"
/**
 * main - Entry point.
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Description: prints all arguments it receives.
 *
 * Return: Returns 0 if successful.
 */

int main(int argc, char **argv)
{
	int i;

	if (argc < 1)
		return (-1);

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
