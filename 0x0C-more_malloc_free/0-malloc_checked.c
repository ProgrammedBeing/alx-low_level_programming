#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Entry point.
 *
 * @b: size of memory to be allocated.
 *
 * Description: allocates memory using malloc.
 *
 * Return: Return pointer to allocated memory if successful else exit(98).
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
