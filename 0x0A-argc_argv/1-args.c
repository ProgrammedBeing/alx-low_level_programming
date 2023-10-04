#include <stdio.h>
#include "main.h"
/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Description: prints the number of arguments passed into it
 *
 * Return: Returns 0 if successful
 */

int main(int argc, char **argv)
{
	int count;
	(void)argv;

	count = argc - 1;
	printf("%d\n", count);

	return (0);
}
