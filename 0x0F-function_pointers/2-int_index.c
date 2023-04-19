#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an int according to a call-back fun
 *
 * @array: the array
 * @size: the size
 * @cmp: the compare function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
