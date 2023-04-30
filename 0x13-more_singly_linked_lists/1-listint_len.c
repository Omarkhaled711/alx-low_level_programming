#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints a linked list of int data
 *
 * @h: the header
 * Return: the size of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
