#include "main.h"

/**
* free_grid - frees a 2d array
*@grid: array to be freed
*@height:height of array
*Return:NaN
*/

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

