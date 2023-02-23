#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: Parameter
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	{

		l = -1 * (n % 10);
		_putchar(l + '0');
	}
	else
		_putchar(l + '0');
	return (0);
}
