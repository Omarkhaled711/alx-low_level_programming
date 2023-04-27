#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 *
 * @head: the head of the list
 * @str: the string to add to the list
 * Return: header pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_list = strdup(str);
	list_t *new = malloc(sizeof(list_t));

	if (str_list == NULL || new == NULL)
		return (NULL);
	new->len = strlen(str_list);
	new->str = str_list;
	new->next = *head;
	*head = new;
	return (new);
}
