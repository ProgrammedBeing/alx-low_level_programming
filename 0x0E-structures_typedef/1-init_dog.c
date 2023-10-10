#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Entry point.
 *
 * @d: Pointer to dog structure.
 * @name: Dog's name.
 * @age: Dog's age
 * @owner: Dog's owner.
 *
 * Description: initialize a variable of type struct dog.
 *
 * Return: Returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
