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
 * add_node - adds a node to the beginning of the list
 *
 * @head: the head of the list
 * @str: the string to add to the list
 * Return: header pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
