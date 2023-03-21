#include "main.h"

/**
 * print_last_digit - as the name suggests.
 *
 * @n: the argument
 * Return: the last number of n
 *
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n % 10);
	return (n % 10);
}
