#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return:0
 *
 */

int main(void)
{
	char arr[] = "_putchar";
	int i;

	for (i = 0; arr[i]; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');

	return (0);
}
