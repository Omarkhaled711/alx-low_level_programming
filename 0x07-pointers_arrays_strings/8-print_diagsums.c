#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the two diagnoal sums of a square matrix
 *
 * @a: the 2d array of the matrix
 * @size: the size of the row
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
