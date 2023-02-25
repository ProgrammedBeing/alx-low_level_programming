#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned int f1 = 1;
	unsigned int f2 = 2;
	unsigned int Nt = f1 + f2;
	int i;

	printf("%u, %u, ", f1, f2);
	for (i = 3; i <= 98; i++)
	{
		printf("%u, ", Nt);
		f1 = f2;
		f2 = Nt;
		Nt = f1 + f2;
	}
	putchar('\n');
	return (0);
}
