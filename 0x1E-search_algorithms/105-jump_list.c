#include "search_algos.h"

/**
 * jump_list - search for a value in a list using jump search
 * @list: the list to search in
 * @size: the size of the list
 * @value: the value to search for
 * Return: the index of the value or -1
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int flag = 1;
	listint_t *start;
	size_t step_size = sqrt(size), index = 0, i = 0;

	if (list == NULL || size == 0)
		return (NULL);
	while (flag || (index < size && list->next && list->n < value))
	{
		start = list;
		i++;
		index = i * step_size;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && list->index != index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
		flag = 0;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start->index,
			list->index);
	for (; start && start->index <= list->index; start = start->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
}
