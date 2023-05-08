#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a separator
 * @separator: a separator between strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *check;
	va_list nPtr;

	va_start(nPtr, n);
	for (i = 0; i < n; i++)
	{
		check = va_arg(nPtr, char *);
		if (check != NULL)
			printf("%s", check);
		else
			printf("%s", "(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nPtr);
}
