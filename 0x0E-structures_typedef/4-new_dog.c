#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new object of type dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
		return (NULL);
	strcpy(new_dog->name, name);
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
		return (NULL);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
