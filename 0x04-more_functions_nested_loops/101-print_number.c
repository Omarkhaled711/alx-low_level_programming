#include "main.h"

/**
 * print_number - prints an integer using _putchar
 *
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int reverse = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n)
	{
		reverse *= 10;
		reverse += n % 10;
		n = n / 10;
	}
	while (reverse)
	{
		_putchar('0' + reverse % 10);
		reverse /= 10;
	}
}
