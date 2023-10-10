#ifndef DOG_H_
#define DOG_H_
#include <stdio.h>
/**
 * struct dog - Dog attributes.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The dog's owner.
 *
 * Description: The attributes of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
