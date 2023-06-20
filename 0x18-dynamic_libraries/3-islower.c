#include "main.h"
/**
 * _islower - check for lowercase chars
 *
 * @c: the char to check
 * Return: 1 if the char is in lowercase, 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
