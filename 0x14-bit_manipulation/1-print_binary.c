#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints a number in binary using only bitwise ops
 *
 * @n: the number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
	{
		_putchar('0');
	}
}
