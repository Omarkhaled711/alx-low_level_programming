#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: pointer to the destination string
 * @src: pointer to the second string
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = 0;
	return (dest);
}
