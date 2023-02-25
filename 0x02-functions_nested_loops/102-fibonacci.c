#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	int i;
	long int Nt = f1 + f2;

	printf("%ld, %ld,", f1, f2);
	for (i = 3; i <= 50; i++)
	{
		printf(" %ld,", Nt);
		f1 = f2;
		f2 = Nt;
		Nt = f1 + f2;
	}
	putchar('\n');
	return (0);
}
