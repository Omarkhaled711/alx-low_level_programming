#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a separator
 * @separator: a separator between numbers
 * @n: number of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nPtr;

	va_start(nPtr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nPtr, int));
		if (separator != NULL && i != n-1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nPtr);
}
