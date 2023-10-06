#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  return a pointer 2 allocated space in memory with dup. string.
 * @str: Contains string to be duplicated.
 *
 * Return: pointer or NULL.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, length = 0;

	/* To get length of string */
	while (str[length] != '\0')
		length++;
	/* Allocate space to ptr */
	ptr = malloc(1 + (length * sizeof(char)));

	/* To check if space allocation is successful */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	ptr[i] = '\0';
	return (ptr);
}
