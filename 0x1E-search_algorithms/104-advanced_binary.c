#include "search_algos.h"


/**
 * recursive_binary - implements BS recursively
 * @array: the array to search in
 * @high: the last index to consider
 * @low: the lowest index to consider
 * @index: the first index found that contains value or -1
 * @value: the value to search for
 * Return: index
*/
int recursive_binary(int *array, size_t high, size_t low,
					int index, int value)
	{
		size_t mid, i;

		if (low > high)
			return (index);
		if (low == high && array[low] == value)
			return (low);
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (recursive_binary(array, mid, low,
			mid, value));
		if (array[mid] > value)
			return (recursive_binary(array, mid - 1, low,
			mid, value));
		return (recursive_binary(array, high, mid + 1,
		index, value));


	}
/**
 * advanced_binary - searches an array in sorted order with Bs
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	int index = -1;

	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, size - 1, 0, index, value));
}
