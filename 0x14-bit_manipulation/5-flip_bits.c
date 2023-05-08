#include "main.h"

/**
 * flip_bits - count the number of bits needed to be fliped in n to be = m
 *
 * @n: the first number
 * @m: the second number
 * Return: the count of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;
		}
	}
	return (count);
}
