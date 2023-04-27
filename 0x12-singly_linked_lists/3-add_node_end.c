#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string to find its length
 * Return: the length of s
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
	}
	return (i);
}
/**
 * add_node_end - adds a node to the end of the list
 *
 * @head: the head of the list
 * @str: the string to add to the list
 * Return: header pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (*head);
}
