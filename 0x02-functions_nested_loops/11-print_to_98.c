#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers starting from a given number to 98
 *
 * @n: the number to start printing from
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
