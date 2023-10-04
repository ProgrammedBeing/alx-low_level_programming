#include <stdio.h>
#include "main.h"
/**
 * main - Entry point.
 * @argc: Count number of arguments
 * @argv: An array of pointers pointing to command line arguments
 *
 * Description: prints program name
 *
 * Return: Returns 0 if sucessful
 */

int main(int argc, char **argv)
{
	if (argc < 1)
		return (-1);
	printf("%s\n", argv[0]);

	return (0);
}
