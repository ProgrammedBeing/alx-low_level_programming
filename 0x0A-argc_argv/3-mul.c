#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point.
 * @argc: Arguments count
 * @argv: Argument vectors
 *
 * Description: multiplies two numbers.
 *
 * Return: Returns 0 if successful
 */

int main(int argc, char **argv)
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mult = a * b;

	printf("%d\n", mult);
        return (0);
}
