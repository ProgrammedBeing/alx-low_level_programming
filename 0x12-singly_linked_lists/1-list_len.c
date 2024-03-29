#include <stdio.h>
#include "lists.h"
/**
 * list_len - Entry point.
 *
 * @h: A pointer to the head of the list.
 *
 * Description: returns the number of elements in a linked list_t list.
 *
 * Return: Returns the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
