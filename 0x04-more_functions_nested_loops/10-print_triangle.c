#include "main.h"

/**
 * print_triangle - prints a triangle of size (size) using _putchar
 *
 * @size: size of the square
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, startDraw = 1;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size - startDraw; j++)
		{
			_putchar(' ');
		}
		for (j = size - startDraw; j < size; j++)
		{
			_putchar('#');
		}
		startDraw++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
