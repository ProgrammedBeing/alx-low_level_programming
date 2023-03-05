#include "main.h"

/**
 * _strlen - Entry
 *
 * @s: Pointer Parameter
 * Return: Nothing
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	x = 0;
	while (*(s + x) != '\0')
	{
		count = count + 1;
		x++;
	}
	return (count);
}
