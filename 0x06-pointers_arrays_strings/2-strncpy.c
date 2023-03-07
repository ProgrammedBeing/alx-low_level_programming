#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: string is copied here
 * @src: String is copied from here to dest
 * @n: number of byte to be copied 
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
