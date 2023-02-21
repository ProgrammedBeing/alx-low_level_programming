#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a';) 
		putchar(c--);
	putchar('\n');
	return (0);
}
