#include "search_algos.h"

/**
 * binary_search - searches an array in sorted order with Bs
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (!array || size == 0)
		return (-1);
	low = 0, high = size - 1;
	while (low <= high)
	{
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
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
