#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 *
 * @n: the number to consider
 * @index: the index to return
 * Return: 1 on succeed or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
