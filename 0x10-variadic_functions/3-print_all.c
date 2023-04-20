#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: specifies the thing to be printed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *check, *seprate = "";
	va_list formatPtr;

	va_start(formatPtr, format);
	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", seprate, va_arg(formatPtr, int));
				break;
			case 'i':
				printf("%s%d", seprate, va_arg(formatPtr, int));
				break;
			case 'f':
				printf("%s%f", seprate, va_arg(formatPtr, double));
				break;
			case 's':
				check = "(nil)";
				if (check != NULL)
					check = va_arg(formatPtr, char *);
				printf("%s%s", seprate, check);
				break;
			default:
				i++;
				continue;
		}
		seprate = ", ";
		i++;
	}
	printf("\n");
	va_end(formatPtr);
}
