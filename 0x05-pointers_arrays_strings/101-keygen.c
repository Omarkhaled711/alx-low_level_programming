#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random valid
 * passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int sum, n, pass;

	sum = 0;
	srand(time(NULL));
	while (1)
	{
		pass = (rand() % 127) + 1;
		sum += pass;
		putchar(pass);
		if ((2772 - sum) < 128)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n);
			break;
		}
	}

	return (0);
}
