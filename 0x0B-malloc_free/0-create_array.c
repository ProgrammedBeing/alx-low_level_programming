#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point.
 * @size: Size of memory to be allocated.
 * @c: char to be initialized.
 *
 * Description: creates an array of chars initializes it with a specific char.
 *
 * Return: Return a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
