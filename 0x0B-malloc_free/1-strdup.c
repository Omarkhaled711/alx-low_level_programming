#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a function that creates a string which contains a copy
 *		of the one given as a parameter.
 *
 * @str: the char to use to fill the array
 * Return: a pointer to str, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	i++;
	s = (char *) malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
