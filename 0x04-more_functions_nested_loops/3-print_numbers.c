#include "main.h"
/**
 * print_numbers - Entry point
 * @void: No parameter
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
