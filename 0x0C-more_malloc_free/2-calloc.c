#include <stdlib.h>
#include "main.h"

/**
 * _calloc - similar to calloc in the stldib.h
 * @nmemb: number of elements
 * @size: the element size in bytes
 * Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i <  (nmemb * size); i++)
		p[i] = 0;

	return ((void *) p);

}
