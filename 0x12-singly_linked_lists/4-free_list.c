#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *prev = head;

	while (head != NULL)
	{
		free(head->str);
		head = head->next;
		free(prev);
		prev = head;
	}
}
