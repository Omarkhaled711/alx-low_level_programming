#include <stdio.h>

/**
 * main - print the sum of even values in fibonacci series
 *	that are less than 4000000
 *
 *Return: 0
 */
int main(void)
{
	int a = 1, b = 2;
	unsigned long sum = 2;
	int next = a + b;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		a = b;
		b = next;
		next = a + b;
	}
	printf("%lu\n", sum);
	return (0);
}
