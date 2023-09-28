#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0-9, except 2 and 4.
 * Return - nothing.
 */
void print_most_numbers(void)
{
	int c;

	c = 0;
	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}

	_putchar('\n');
}
