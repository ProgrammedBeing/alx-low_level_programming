#include "main.h"
/**
 * puts2 - Entry point
 *
 * @str: Pointer Parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	putchar('\n');
}
