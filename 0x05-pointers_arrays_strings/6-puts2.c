#include "main.h"

/**
 * puts2 - a function that prints every other char of a string.
 *
 * @str: the string to print
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
	{
		_putchar(str[i]);
		if (!str[i + 1])
			break;
	}
	_putchar('\n');
}
