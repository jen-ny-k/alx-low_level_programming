#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - rellocate a memory block
 * @old_size: size of old string
 * @new_size: size of new string
 * @ptr: pointer new
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	size_t i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		point = malloc(new_size);
		return (point);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		point[i] = oldp[i];
	free(ptr);
	return (point);
}
