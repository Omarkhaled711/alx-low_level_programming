#include "search_algos.h"

/**
 * jump_search - search for a value in an array using jump search
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step_size = sqrt(size), low, high, i;

	if (!array || size == 0)
		return (-1);

	low = 0, high = step_size;
	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		if (high >= size || value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i < high && i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		low = high;
		high += step_size;
	}
	return (-1);
}
