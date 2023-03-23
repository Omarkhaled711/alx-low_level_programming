#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2 without using long long, structs and pointrs.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long a = 0, b = 1, sum;
	unsigned long a_half1, a_half2, b_half1, b_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	a_half1 = a / 10000000000;
	b_half1 = b / 10000000000;
	a_half2 = a % 10000000000;
	a_half2 = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		half1 = a_half1 + b_half1;
		half2 = a_half2 + b_half2;
		if (a_half2 + a_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		a_half1 = b_half1;
		a_half2 = b_half2;
		b_half1 = half1;
		b_half2 = half2;
	}
	printf("\n");
	return (0);
}
