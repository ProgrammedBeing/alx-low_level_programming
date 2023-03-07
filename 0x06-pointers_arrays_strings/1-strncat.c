#include "main.h"
/**
 * _strncat - Entry point
 * @dest: destination array
 * @src: string to be copied
 * @n: number of byte to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != '\0')
		destlen++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
