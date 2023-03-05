#include "main.h"
/**
 * rev_string - Entry point
 *
 * @s: Pointer Parameter
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0; 
	int i = 0;
	char temp;

	while (*(s + len) != '\0')
		len++;

	while (i < len--)
	{
		temp = *(s + i);
		*(s + (i++)) = *(s + len);
		*(s + len) = temp;
	}
}
