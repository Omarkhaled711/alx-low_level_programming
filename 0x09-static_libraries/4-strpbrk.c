#include "main.h"

/**
 * _strpbrk - similar to strspn function in std library
 *
 * @s: intial segment to search in
 * @accept: the chars to search for.
 * Return:   pointer to the byte in s that matches one of
 *		the bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char arr[256];

	for (i = 0; accept[i]; i++)
	{
		arr[(int) accept[i]] = 1;
	}
	for (i = 0; s[i]; i++)
	{
		if (arr[(int) s[i]] == 1)
		{
			return (s + i);
		}
	}
	return (0);
}
