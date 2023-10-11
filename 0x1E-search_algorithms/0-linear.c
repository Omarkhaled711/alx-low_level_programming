#include "search_algos.h"

/**
 * linear_search - searches an array using linear search
 * @array: the  array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
