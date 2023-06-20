#include "main.h"

/**
 * _isupper - checks whether a letter is uppercase or not
 *
 * @c: the letter to check
 * Return: 1 if the letter is uppercase, 0 other wise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
