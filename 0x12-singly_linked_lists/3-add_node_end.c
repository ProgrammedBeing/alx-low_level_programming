#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * *add_node_end  - Entry point.
 * @head: A pointer to the pointer to first node.
 * @str: String.
 *
 * Description: adds a new node at the end of a list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str);
{
	list_t new, current;
	unsigned int lenth = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);

	while (str[length])
		length++;

	new->len = length;

	if (*head == NULL)
	{
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;


	current->next = new;

	return (*head);
}
