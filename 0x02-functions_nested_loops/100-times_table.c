#include "main.h"

/**
 * print_times_table - print the n time table starting from 0
 *
 * @n: the argument
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, pro;
	char flag = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			pro = i * j;
			if (pro / 100 != 0)
			{
				_putchar('0' + pro / 100);
				pro = pro % 100;
				flag = 1;
			}
			else if (j != 0)
			{
				_putchar(' ');
			}
			if (pro / 10 != 0 || flag)
			{
				_putchar('0' + pro / 10);
				pro = pro % 10;
			}
			else if (j != 0)
			{
				_putchar(' ');
			}
			_putchar('0' + pro);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		flag = 0;
	}
}
