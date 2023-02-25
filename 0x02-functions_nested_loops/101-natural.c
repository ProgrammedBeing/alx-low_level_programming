#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, sum;
	int multi3 = 0;
	int multi5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			multi3 = multi3 + i;
		else if (i % 5 == 0)
			multi5 += i;
		sum = multi3 + multi5;
	}
		printf("%d\n", sum);
		return (0);
}
