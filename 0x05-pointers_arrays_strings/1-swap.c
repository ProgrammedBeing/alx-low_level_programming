#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: Pointer Parameter
 * @b: Pointer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
