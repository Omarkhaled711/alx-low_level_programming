#include "main.h"

/**
 * _memset - The _memset() function fills the first n bytes of the memory
 *		area pointed to by s with the constant byte b
 * @s: pointer to a char
 * @b: the constant byte b that the memory will be filled with
 * @n: number bytes
 * Return: pointer to a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
