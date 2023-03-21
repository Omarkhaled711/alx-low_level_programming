#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int pro, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			pro = i * j;
			if (pro <= 9 && j != 0)
				_putchar(' ');
			if (pro > 9)
				_putchar('0' + pro / 10);
			_putchar('0' + pro % 10);
			pro = pro / 10;
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');

		}
		_putchar('\n');
	}
}
