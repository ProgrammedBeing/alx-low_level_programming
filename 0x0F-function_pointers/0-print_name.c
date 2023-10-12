#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Entry point.
 * @name: A string containing the name to be printed.
 * @f: Function pointer.
 * Description: prints a name.
 *
 * Return: Returns nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
