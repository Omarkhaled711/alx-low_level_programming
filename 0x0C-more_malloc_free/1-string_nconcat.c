#include <stdlib.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string to find its length
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars to add to s2
 * Return: a pointer to the new string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n > size2)
		n = size2;
	newStr = malloc(sizeof(*newStr) * (size1 + n + 1));
	if (newStr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		newStr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		newStr[i] = s2[j];
	newStr[i] = 0;
	return (newStr);
}
