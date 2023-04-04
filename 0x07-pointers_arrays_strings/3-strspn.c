#include "main.h"

/**
 * _strspn - similar to strspn function in std library
 *
 * @s: intial segment to search in
 * @accept: the chars to search for.
 * Return: the number of bytes in the initial segment of s which consist only
 *		of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, current = 0;
	char arr[256];

	for (i = 0; accept[i]; i++)
	{
		arr[(int) accept[i]] = 1;
	}
	for (i = 0; s[i]; i++)
	{
		if (arr[(int) s[i]] == 1)
		{
			current++;
		}
		else
		{
			break;
		}
	}
	return (current);
}
