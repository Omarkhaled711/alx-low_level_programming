#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialze an object of type dog
 *
 * @d: the object
 * @name: puppy's name
 * @age: puppy's age
 * @owner: puppy's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
