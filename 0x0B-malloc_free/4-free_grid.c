#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees memory allocated to 2d array
  * @grid: pointer to 2d array
  * @height: height of the grid
  * Return: returns 0 if grid is null
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
