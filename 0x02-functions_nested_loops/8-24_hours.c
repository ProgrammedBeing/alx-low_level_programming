#include "main.h"
/**
 * jack_bauer - Entry point
 * void: No parameter
 * Return: Always 0 (success)
 */

void jack_bauer(void)
{
	int hr;	/* Hour counter */
	int mn;	/* Minute counter */

	for (hr = 0; hr < 24; hr++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
