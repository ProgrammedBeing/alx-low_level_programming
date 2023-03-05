#include "main.h"
/**
 * _puts - Entry point
 *
 * @str: Pointer Parameter
 * Return: Nothing
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
