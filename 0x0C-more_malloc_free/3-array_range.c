#include <stdio.h>
#include "main.h"
/**
 * array_range - Entry point.
 * @min: Minimum value of the array.
 * @max: Maximum value of the array.
 *
 * Description: creates an array of integers.
 *
 * Return: Return pointer
 */

int *array_range(int min, int max)
{
	int i, *ptr, counter = 0;

	if (min > max)
		return (NULL);

	counter = max - min;
	counter += 1;

	ptr = malloc(sizeof(int) * counter);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < counter; i++)
		ptr[i] = min + i;

	return (ptr);
}
