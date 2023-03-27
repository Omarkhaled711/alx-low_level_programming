#include "main.h"

/**
 * puts_half - a function that returns the length of a string.
 *
 * @str: the string to find its length
 * Return: void
 */
void puts_half(char *str)
{
	int i, mid, len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	mid = len / 2;
	if (len % 2)
		mid++;
	for (i = mid; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
