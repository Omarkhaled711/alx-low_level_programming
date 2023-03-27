#include "main.h"

/**
 * print_rev - a function that prints a string in reverse.
 *
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
