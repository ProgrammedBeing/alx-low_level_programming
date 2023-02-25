#include "main.h"
/**
 * print_times_table - Entry point
 * @n: Parameter
 * Return: Always 0 (success)
 */

void Valoutput(int n);

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				Valoutput(i * j);
			}
				_putchar('\n');
		}
	}
}

/**
 * Valoutput - Does the printing of the result only
 * @n: Parameter
 * Return: Nothing
 */
void Valoutput(int n)
{
	if (n < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar((n % 10) + '0');
	}
	else if (n < 100 && n >= 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
