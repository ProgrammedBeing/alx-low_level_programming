#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
/**
 * main - Entry point
 *
 * @argc: command line count
 * @argv: a pointer to strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc == SIZE)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
