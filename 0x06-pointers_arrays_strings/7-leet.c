#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s:  string to  consider
 * Return: pointer to  s
 */

char *leet(char *s)
{
	int i, j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	int chnge[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j] || s[i] == (a[j] - 'a' + 'A'))
			{
				s[i] = chnge[j];
			}
		}

	}
	return (s);
}
