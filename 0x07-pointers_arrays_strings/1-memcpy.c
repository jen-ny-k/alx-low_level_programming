#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies a memory area
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: return destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
