#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and initializes it
 *			with spcific char
 * @size: the size of the array
 * @c: the char to use to fill the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
