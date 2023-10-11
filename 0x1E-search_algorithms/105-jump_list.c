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
	size_t step_size = sqrt(size), low, high, i, j;
	listint_t *start = list;

	if (!list || size == 0)
		return (NULL);

	low = 0, high = step_size;
	while (low < size && list)
	{
		start = list;
		for (j = low; j < high && list; j++)
		{
			if (list && list->next)
				list = list->next;
			else
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", j, list->n);
		if ((list && list->n >= value) || (!list) || (list->next == NULL))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, j);
			for (i = low; i < high && i < size; i++)
			{
				if (!start)
					return (NULL);
				printf("Value checked at indext [%ld] = [%d]\n", i, start->n);
				if (start->n == value)
					return (start);
				start = start->next;
			}
		}
		low = high;
		high += step_size;
	}
	return (NULL);
}
