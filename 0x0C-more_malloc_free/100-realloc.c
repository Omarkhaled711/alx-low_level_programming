#include <stdlib.h>
#include "main.h"

/**
 * _realloc - similar to the realloc funtionin the stldib.h
 * @ptr: pointer to the existing memory
 * @old_size: old size
 * @new_size: new size 
 * Return: a void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;
	char *access1, *access2;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{	free (ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == 0)
		return (NULL);
	access1 = p;
	access2 = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size && ptr != NULL; i++)
		access1[i] = access2[i];

	return (p);

}
