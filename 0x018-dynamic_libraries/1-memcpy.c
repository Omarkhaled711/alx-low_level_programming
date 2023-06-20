#include "main.h"

/**
 * _memcpy - The _memset() function copies the first n bytes from src to dest
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: number bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
