#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: command line count
 * @argv: a pointer to strings
 * Return: 0 if success
 */

int main(int argc, char * argv[])
{
	(void)argc;

	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
