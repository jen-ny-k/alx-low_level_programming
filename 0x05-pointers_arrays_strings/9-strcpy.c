#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy a string
 * @dest: destination string
 * @src: Source of the string
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
