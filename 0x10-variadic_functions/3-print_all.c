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
	int i = 0, flag = 0;
	char *check;
	va_list formatPtr;

	va_start(formatPtr, format);
	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(formatPtr, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(formatPtr, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(formatPtr, double));
				flag = 1;
				break;
			case 's':
				check = "(nil)";
				if (check != NULL)
					check = va_arg(formatPtr, char *);
				printf("%s", check);
				flag = 1;
				break;
		}
		if (format[i + 1] != 0 && flag == 1)
			printf(", ");
		flag = 0;
		i++;
	}
	printf("\n");
	va_end(formatPtr);
}
