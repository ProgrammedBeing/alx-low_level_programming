#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Entry point.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Description: creates a new dog.
 *
 * Return: Pointer to the new dog, or NULL if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	unsigned int i, len1 = 0, len2 = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	while (name[len1++])
		;
	while (owner[len2++])
		;

	ptr->name = malloc(sizeof(ptr->name) * len1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
		ptr->name[i] = name[i];

	ptr->age = age;

	ptr->owner = malloc(sizeof(ptr->owner) * len2);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i <= len2; i++)
		ptr->owner[i] = owner[i];

	return (ptr);
}
