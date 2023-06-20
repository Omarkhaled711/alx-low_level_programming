#include "main.h"
/**
 * _isalpha - check for wether a char is a letter or not
 *
 * @c: the char to check
 * Return: 1 if the char is a letter, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
