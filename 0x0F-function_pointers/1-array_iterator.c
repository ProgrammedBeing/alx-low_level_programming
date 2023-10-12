#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point.
 * @array: An integer array.
 * @size: Size of the array.
 * @action: Function pointer.
 *
 * Description: executes a function given as a parameter/
 * on each element of an array.
 *
 * Return: Return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
