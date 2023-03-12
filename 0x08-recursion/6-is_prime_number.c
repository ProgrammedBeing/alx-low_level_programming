#include "main.h"

int prime_check(int x, int prime);

/**
 * is_prime_number - Entry point
 *
 * @n: Integer Parameter
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_check(2, n));
}
/**
 * prime_check - Checks conditions for a number to be regarded as a Prime
 * @n: Parameter
 * @x: number to divide n
 * Return: 1 or 0;
 */
int prime_check(int x, int n)
{
	if (x >= 2 && x <= n)
	{
		if (n % x == 0 && x != n)
			return (0);
		else if (n % x == 0 && x == n)
			return (1);
		else
			return (prime_check(x + 1, n));
	}
	else
		return (0);
}
