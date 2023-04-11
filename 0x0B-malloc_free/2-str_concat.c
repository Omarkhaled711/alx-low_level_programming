#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the seond string
 * Return: a pointer to a new string, or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; i++, j++)
	{
	}
	i++;
	s = (char *) malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] ; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j]; i++, j++)
	{
		s[i] = s2[j];
	}
	s[i] = 0;
	return (s);
}
