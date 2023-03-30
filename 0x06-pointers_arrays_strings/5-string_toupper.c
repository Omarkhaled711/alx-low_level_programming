#include "main.h"

/**
 * string_toupper - change  lowercase letters into upper ones
 *
 * @s: the string to consider
 * Return: pointer  to  s
 */
char *string_toupper(char *s)
{
	int  i;

	for (i = 0; s[i];  i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i]  - 'a'  + 'A';
		}
	}
	return (s);
}
