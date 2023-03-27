#include "main.h"

/**
 * swap_int - a function that swaps two ints.
 *
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
