#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 *
 * @head: a pointer to the header node
 * @index: the index of the node to remove
 * Return: 1 on success -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *prev;

	if (head == NULL)
		return (-1);
	cur = *head;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		prev = cur;
		if (cur == NULL || cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	prev->next = cur->next;
	free(cur);
	return (1);
}
