#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point.
 * @argc: rgument counter.
 * @argv: Argumnet vector.
 *
 * Description: adds positive numbers.
 *
 * Return: Return 0 if successful
 */

int main(int argc, char **argv)
{
	int i, sum = 0, count = 1;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	else
	{
		while (count < argc)
		{
			for (i = 0; argv[count][i] != '\0'; i++)
			{
				if (!(isdigit(argv[count][i])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[count]);
			count++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
