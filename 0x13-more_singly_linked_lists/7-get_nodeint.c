#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of the list
 *
 * @head: the header node
 * @index: the index to return
 * Return: the node of (index) position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
