#include "main.h"
#include <stdlib.h>

/**
  * **alloc_grid - returns a pointer to 2d array
  * @width: int to be checked
  * @height: int to be checked
  * Return: returns null on failure & grid on success
  */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	/* check for valid input */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for the 2d array */
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			/* free previously allocated memory if allocation fails */
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
		/* initialize elements of the grid to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
