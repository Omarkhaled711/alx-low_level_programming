#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list of ints and sets the head to null
 *
 * @head: the header of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *prev = *head;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(prev);
		prev = *head;
	}
}
