#include <stdlib.h>
#include "main.h"

/**
 * get_bit - gets the value of bit
 *
 * @n: the number to consider
 * @index: the index to return
 * Return: the value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	return ((n >> index) & 1);
}
