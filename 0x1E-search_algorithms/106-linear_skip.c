#include "search_algos.h"

/**
 * linear_skip - using skip list in searching a sorted list
 * @list: the list to search in
 * @value: the value to search for
 * Return: the node that contains the value or NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *shortcut;

	if (list == NULL)
		return (NULL);
	shortcut = list->express;
	while (shortcut && shortcut->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			shortcut->index, shortcut->n);
		list = shortcut;
		shortcut = shortcut->express;
	}
	start = list;
	if (shortcut == NULL)
	{
		while (list->next != NULL)
			list = list->next;
	}
	else
	{
		printf("Value checked at index [%ld] = [%d]\n",
		shortcut->index, shortcut->n);
		list = shortcut;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	start->index, list->index);
	for (; start != NULL; start = start->next)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		start->index, start->n);
		if (start->n == value)
			return (start);
		if (start == list)
			break;
	}
	return (NULL);
}
