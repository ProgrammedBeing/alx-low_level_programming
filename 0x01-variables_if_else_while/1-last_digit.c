#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n, l;	/* l = last number */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code starts here */
	l = n % 10;	/* initialize l */
	printf("Last digit of %d is %d", n, l);
	if (l > 5)
		printf(" and is greater than 5\n");
	else if (l == 0)
		printf(" and is 0\n");
	else if (l < 6 && !0)
		printf(" and is less than 6 and not 0\n");
	return (0);
}
