#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory of an array
 * @nmemb: numerical member
 * @size: size of memory
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = calloc(nmemb, size);
	if (point == NULL)
		return (NULL);
	else
		return (point);
}
