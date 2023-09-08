#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of array
 * @min: min number
 * @max: max number
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *point, size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	point = malloc(sizeof(int) * size);
	if (point == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		point[i] = min++;
	return (point);
}
