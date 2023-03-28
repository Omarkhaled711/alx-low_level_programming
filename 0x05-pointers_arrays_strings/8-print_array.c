#include <stdio.h>
#include "main.h"

/**
 * print_array - print the first n elements of the array
 *
 * @a: the array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}

