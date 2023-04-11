#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer to a 2d array of int.
 * @height: height of the grid
 * @width: width of the grid
 * Return: a pointer to the grid, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
