#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list of ints
 *
 * @head: the header of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *prev = head;

	while (head != NULL)
	{
		head = head->next;
		free(prev);
		prev = head;
	}
}
