#include "main.h"
/**
 *  _isdigit - Entry point
 *  @c: Parameter
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
