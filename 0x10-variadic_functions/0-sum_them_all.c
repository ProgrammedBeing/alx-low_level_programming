#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point.
 * @n: Number of parameters.
 *
 * Description: sum of all its parameters.
 *
 * Return: Returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
