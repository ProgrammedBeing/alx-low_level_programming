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
	long int sum = 2;
	long int Nt = f1 + f2;

	for (i = 3; i <= 50; i++)
	{
		f1 = f2;
		f2 = Nt;
		Nt = f1 + f2;
		if ((Nt % 2) == 0 && Nt <= 4000000)
			sum += Nt;
	}
	printf("%ld\n", sum);
	return (0);
}
