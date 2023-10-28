#include <stdio.h>
#include "lists.h"
/**
 * void free_list(list_t *head); - Entry point
 *
 * @head: Pinter to first node
 * Description: frees a list_t list.
 *
 * Return: Returns nothing.
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}	
}
