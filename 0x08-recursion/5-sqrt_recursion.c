#include "main.h"

int _sqrt(int number, int root);

/**
 * _sqrt_recursion - Entry point
 *
 * @n: Root
 * Return: root
 */

int _sqrt_recursion(int n)
{
	return _sqrt(1, n);
}

/**
 * sqrt - Find the root of a number
 * @number: Number that runs up till numberer inputted, n
 * @root: Number inputted
 * Return: root
 */

int _sqrt(int number, int root)
{
	if (number >= 1 && number <= root)
	{
		if (number * number == root)
			return (number);
		else
			return (_sqrt(number + 1, root));
	}
	else
		return (-1);
}
