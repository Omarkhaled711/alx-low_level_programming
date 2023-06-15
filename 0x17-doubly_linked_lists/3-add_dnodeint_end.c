#include "lists.h"

/**
 * add_dnodeint_end - add node to the end
 *
 * @head: a pointer to the header pointer
 * @n: the data to add
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new->next = current->next;
	new->prev = current;
	current->next = new;
	return (new);
}
