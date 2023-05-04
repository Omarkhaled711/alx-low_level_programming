#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0
 *
 * @n: the number to consider
 * @index: the index to return
 * Return: 1 on succeed or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
