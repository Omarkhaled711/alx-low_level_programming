#include "main.h"

/**
 * _strncpy - like strncpy in std library
 *
 * @dest: string of destination
 * @src: string of src
 * @n: number of chars to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && n; i++, n--)
	{
		dest[i] = src[i];
	}
	for (; n > 0; i++, n--)
	{
		dest[i] = 0;
	}
	return (dest);
}
