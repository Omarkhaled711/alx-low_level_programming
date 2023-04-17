#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints an object of type dog
 *
 * @d: the object
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		if (d->age >= 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nill)");
		}
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
