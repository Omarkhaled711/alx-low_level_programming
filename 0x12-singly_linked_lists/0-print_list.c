#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints a list
 *
 * @h: the header of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int len;
	const list_t *current = h;

	for (len = 0; current != NULL; len++)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
	}
	return (len);
}

