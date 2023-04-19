#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds 2 ints
 *
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs 2 ints
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul 2 ints
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div 2 ints
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod 2 ints
 * @a: first int
 * @b: second int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

