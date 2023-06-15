#include "lists.h"

/**
 * dlistint_len - return the number of elements in a doubly linked list
 *
 * @h: the header of the list
 * Return: elements numbers
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int elements = 0;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}
