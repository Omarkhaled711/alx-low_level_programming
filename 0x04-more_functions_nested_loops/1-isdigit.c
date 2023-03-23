#include "main.h"

/**
 * _isdigit - checks whether a given input has an ascii of a digit
 *
 * @c: the input to check
 * Return: 1 if it's a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
