#include "main.h"
/**
 * print_times_table - Entry point
 * @n: Parameter
 * Return: Always 0 (success)
 */

void Valoutput(int k);

void print_times_table(int n)
{
	int k, i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				Valoutput(k);
				if (j == n)
					continue;
				_putchar(',');
				if (k / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (((k / 10) >= 1 || k / 10 <= 9) && k < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
				_putchar('\n');
		}
	}
}

/**
 * Valoutput - Does the printing of the result only
 * @k: The variable holding the result
 * Return: Nothing
 */
void Valoutput(int k)
{
	if (k < 10)
		_putchar((k % 10) + '0');
	else if (k < 100)
	{
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
	else
	{
		_putchar((k / 100) + '0');
		_putchar(((k % 100) / 10) + '0');
		_putchar(((k % 100) / 10) + '0');
	}
}
