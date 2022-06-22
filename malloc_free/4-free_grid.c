#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees alloc memory of function alloc_grid
 * @grid: is the pointer to the array being freed
 * @height: is how many rows in array pointer to be freed
 */

void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row = row + 1;
	}
	free(grid);
}
