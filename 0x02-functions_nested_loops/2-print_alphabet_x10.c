#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;	/* Counter */
	char letter;

	for (i = 1; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
