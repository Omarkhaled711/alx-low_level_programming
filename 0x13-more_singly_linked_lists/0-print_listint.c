#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a linked list of int data
 *
 * @h: the header
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (len);
}
