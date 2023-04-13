#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints between min and max included
 *
 * @min: the min value in the array
 * @max: the max value in the array
 * Return: a pointer to the int array or NULL
 */

int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
