#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node in the list
 *
 * @head: the header of the list
 * @index: the indext of the target node
 * Return: the node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (index--)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
