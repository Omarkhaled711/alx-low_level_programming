#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char temp[1000009];

	for (i = 0; s[i]; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		temp[j] = s[i];
		j++;
	}
	for (i = 0; s[i]; i++)
	{
		s[i] = temp[i];
	}
}
