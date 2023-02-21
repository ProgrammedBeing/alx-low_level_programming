#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;
	char letter;

	/* To print the number 0-9 */
	for (number = 0; number <= 9; number++)
		putchar('0' + number);

	/* To print the letter a-f part */
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
