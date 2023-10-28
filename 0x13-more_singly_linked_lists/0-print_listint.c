#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Entry point
 *
 * @h: Pointer to the structure.
 * Description: prints all the elements of a listint_t list.
 *
 * Return: Return the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
