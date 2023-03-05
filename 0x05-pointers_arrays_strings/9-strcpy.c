#include "main.h"
/**
 * _strcpy - Pointer function
 *
 * @dest: copied to
 * @src: copied from
 * Return: Memory address
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
