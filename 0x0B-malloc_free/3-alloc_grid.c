#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return pointer to a 2D array
 * @width: no of columns
 * @height: no of rows
 * Return: the matrix
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			free(matrix);
			for (j = 0; j <= height; j++)
				free(matrix[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
