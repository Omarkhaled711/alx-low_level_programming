#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to the destination string
 * @src: pointer to the second string
 * @n: max number of bytes to copy from src.
 * Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j] && n; i++, j++, n--)
	{
		dest[i] = src[j];
	}
	dest[i] = 0;
	return (dest);
}
