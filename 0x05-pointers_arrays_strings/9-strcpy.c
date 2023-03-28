#include "main.h"

/**
 * _strcpy - a function that copies a string.
 *
 * @dest: the destination where u want ur string to be copied
 * @src: the original string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int  i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];

	}
	dest[i] = 0;
	return (dest);
}
