#include "main.h"

/**
 * print_number - prints an integer using _putchar
 *
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int count = 0, reverse = 0;

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
		count++;
		reverse *= 10;
		reverse += n % 10;
		n = n / 10;
	}
	while (reverse || count)
	{
		if (reverse == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('0' + reverse % 10);
			reverse /= 10;
		}
		count--;
	}
}
