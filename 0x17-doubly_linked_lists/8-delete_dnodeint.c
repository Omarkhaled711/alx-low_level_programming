#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 *
 * @head: a pointer to the head of the linked list
 * @index: the index of the node to delete
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (index--)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
