#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using IS
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value of the array
 * Return: the index of the value or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || size == 0)
		return (-1);
	while (1)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
