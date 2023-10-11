#include "search_algos.h"

/**
 * binary_search_exp - searches an array in sorted order with Bs
 * @array: the array to search in
 * @size: the size of the array
 * @start: the index to start searching from
 * @value: the value to search for
 * Return: the index of the value or -1
*/
int binary_search_exp(int *array, size_t start, size_t size, int value)
{
	size_t low, high, mid, i;

	if (!array || size == 0)
		return (-1);
	low = start, high = size - 1;
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

/**
 * exponential_search - searches an array in sorted order with ES
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (!array || size == 0)
		return (-1);
	if (array[i] != value)
	{
		for (i = 1; i < size && array[i] < value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	high = i < size ? i + 1 : size;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high - 1);
	return (binary_search_exp(array, i / 2, high, value));
}
