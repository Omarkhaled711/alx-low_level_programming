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
	unsigned int i;
	void *p;
	char *zero;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	zero = p;
	for (i = 0; i < (nmemb * size); i++)
		zero[i] = 0;

	return (p);

}
