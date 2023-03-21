#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * @n: the number to check
 * Return: 1 if n is +ve , 0 if n is 0 , -ve otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
