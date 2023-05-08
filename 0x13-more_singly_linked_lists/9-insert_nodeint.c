#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insters a node at a given index
 *
 * @head: a pointer to the header node
 * @idx: the indext to insert the node at
 * @n: the data to insert
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	cur = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (cur == NULL || cur->next == NULL)
		{
			free(new);
			return (NULL);
		}
		cur = cur->next;
	}
	new->next = cur->next;
	cur->next = new;
	return (new);
}
