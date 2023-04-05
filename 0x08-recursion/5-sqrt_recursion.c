#include "main.h"

/**
 * sqrt_recursive - returns the natural sqrt of a number
 *
 * @n: the number to find its sqrt
 * @x: the number to try as the sqrt of n
 * Return: the natural sqrt of n -if it exists- or -1
 */
int sqrt_recursive(int n, int x)
{
	if (n < (x * x))
	{
		return (-1);
	}
	if (n == (x * x))
	{
		return (x);
	}
	return (sqrt_recursive(n, x + 1));
}

/**
 * _sqrt_recursion - a wrapping function for sqrt_recursive(n,x)
 *
 * @n: the number to calculate its sqrt
 * Return: the value of sqrt_recursive(n,x)
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}

