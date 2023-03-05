#include "main.h"
/**
 * puts_half - Entry point
 *
 * @str: Pointer Parameter
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n + 1; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
