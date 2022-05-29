#include "main.h"

/**
 * free_grid - it frees an array
 * @grid: the array to be free
 * @height: the height of the array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;
	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
	
}
