#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: The int
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *point;

	point = malloc(b);
	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
