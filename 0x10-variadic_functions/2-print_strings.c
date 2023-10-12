#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Entry point.
 * @separator: string to be printed between the strings
 * @n: number oof strings to be passed to the function.
 *
 * Description: prints strings, followed by a new line.
 *
 * Return: Returns nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
