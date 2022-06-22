#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates an array from the specified height and size
 * @width: the width of the grid
 * @height: how many rows the grid will have
 * Return: The pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row = 0, col = 0;

	if (height < 1 || width < 1)
	{
		return (NULL);
	}

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (row < height)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			row = 0;
			while (row < height)
			{
				free(grid[row]);
				row = row + 1;
			}
			free(grid);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col = col + 1;
		}
		row = row + 1;
	}
	return (grid);
}
