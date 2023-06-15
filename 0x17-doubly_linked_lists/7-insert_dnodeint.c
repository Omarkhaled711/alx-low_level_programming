#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 *
 * @h: a pointer to the header of the linked list
 * @idx: the index to insert the node at
 * @n: data to add
 * Return: the node added or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	new->n = n;
	current = *h;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (idx--)
	{
		if	(current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}
	new->next = current;
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	return (new);
}
