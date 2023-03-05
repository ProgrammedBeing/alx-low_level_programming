#include "main.h"
/**
 * print_rev - Entry point
 *
 * @s : Pointer Parameter
 * Return: Nothing
 */

void print_rev(char *s)
{
	int x;
	int count = 0;

	x = 0;
	while (*(s + x) != '\0')
	{
		count = count + 1;
		x++;
	}

	for (x = count - 1; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
