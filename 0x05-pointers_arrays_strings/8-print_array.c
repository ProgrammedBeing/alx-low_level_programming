#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 *
 * @a: Pointer Parameter
 * @n: Size
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
			continue;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
