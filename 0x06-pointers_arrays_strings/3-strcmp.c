#include "main.h"
/**
 * _strcmp - Entry point
 *
 * @s1: string to be compared
 * @s2: String to be compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; *s1++ && *s2++; i++)
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			break;
		}
		else
			diff = 0;
	}
	return (diff);
}
