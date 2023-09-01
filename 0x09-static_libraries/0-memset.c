#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with constant byte
 * @s: first memory area pointed
 * @b: address of memory
 * @n: byte of memory area
 *
 * Return: The memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
