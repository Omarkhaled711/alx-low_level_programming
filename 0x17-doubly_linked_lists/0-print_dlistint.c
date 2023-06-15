#include "lists.h"

/**
 * print_dlistint - prints the double list elements
 *
 * @h: the header of the list
 * Return: elements numbers
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int elements = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		elements++;
		current = current->next;
	}
	return (elements);
}
