#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: Parameter
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}
		putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}
		printf("\n");
	}
}
