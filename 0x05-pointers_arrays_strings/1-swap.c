#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: First pointer to variable to swap
 * @b: Second pointer to variable to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
