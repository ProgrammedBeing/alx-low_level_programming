#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int Nt = f1 + f2;
	int i;

	printf("%lu, %lu, ", f1, f2);
	for (i = 3; i <= 98; i++)
	{
		printf("%lu, ", Nt);
		f1 = f2;
		f2 = Nt;
		Nt = f1 + f2;
	}
	putchar('\n');
	return (0);
}
