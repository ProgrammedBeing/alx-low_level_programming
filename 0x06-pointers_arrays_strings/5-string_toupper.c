#include "main.h"
/**
 * string_toupper - Entry point
 *
 * @array: Array to be converted
 * Return: array
 */

char *string_toupper(char *array)
{
	int i;

	for (i = 0; *(array + i) != '\0'; i++)
	{
		if (*(array + i) >= 'a' && *(array + i) <= 'z')
			array[i] -= 32;
	}
	return (array);
}
