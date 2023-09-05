#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2D matrix
 * @grid: the matrix
 * @height: height of the matrix
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
