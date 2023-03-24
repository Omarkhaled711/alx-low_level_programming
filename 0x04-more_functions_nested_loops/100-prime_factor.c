#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long biggest;
	unsigned long num = 612852475143;

	for (biggest = 2; num > 1; biggest++)
	{
		if (num % biggest == 0)
		{
			num = num / biggest;
		}
	}
	printf("%lu\n", biggest - 1);
	return (0);
}
