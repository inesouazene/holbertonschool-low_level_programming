#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - function that frees a 2D grid
* @height: height of the grid
* @grid: grid to free
*/

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
