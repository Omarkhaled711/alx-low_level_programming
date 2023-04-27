#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string to find its length
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
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
	char *str_list;
	list_t *new;

	str_list = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = _strlen(str_list);
	new->str = str_list;
	new->next = *head;
	*head = new;
	return (new);
}
