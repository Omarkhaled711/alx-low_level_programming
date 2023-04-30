#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns its data
 *
 * @head: a pointer to the header node
 * Return: data inside header node
 */
int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int data;

	if (head == NULL)
		return (0);
	newHead = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = newHead;
	return (data);
}
