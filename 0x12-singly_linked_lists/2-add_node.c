#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * *add_node  - Entry point.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Description: adds a new node at the beginning of a list_t list.
 *
 * Return: Return the addres of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[length])
		length++;

	new->len = length;

	new->next = *head;
	*head = new;

	return (new);
}
