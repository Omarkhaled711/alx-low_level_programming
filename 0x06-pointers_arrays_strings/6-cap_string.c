#include "main.h"

/**
 * cap_string - captilize all words of a string
 *
 * @s:  string to  consider
 * Return: pointer to  s
 */

char *cap_string(char *s)
{
	int i, j, flag = 0;
	int a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' &&  s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (flag)
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
		flag = 0;
		for (j = 0; a[j] && flag == 0; j++)
		{
			if (s[i] == a[j])
			{
				flag = 1;
			}
		}

	}
	return (s);
}
