#include "main.h"

/**
 * _strchr - Returns a pointer to the 1st occurrence of the char in s, or NULL
 * @s: pointer to a char
 * @c: the char to search for
 * Return: pointer to a char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
