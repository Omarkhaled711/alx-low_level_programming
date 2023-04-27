#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - checks the lenght of a list
 *
 * @h: the header of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int len;
	const list_t *current = h;

	for (len = 0; current != NULL; len++)
	{
		current = current->next;
	}
	return (len);
}

