#include "main.h"

/**
 * _strstr - similar to strstr function in std library
 *
 * @haystack: intial segment to search in
 * @needle: the chars to search for.
 * Return:   pointer to the byte in s that matches one of
 *		the bytes in accept, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		k = i;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[k + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
