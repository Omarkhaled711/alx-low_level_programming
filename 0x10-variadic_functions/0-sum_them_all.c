#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers passed
 *
 * @n: the count of numbers passed
 * @...: var function
 * Return: n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list nPtr;

	va_start(nPtr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nPtr, int);
	}
	va_end(nPtr);
	return (sum);
}
