#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- this function frees grid of 2-D array previously created
 * @grid: pointer to the start of the 2-D grid
 * @height: height of the 2-D array
 * Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
