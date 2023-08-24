#include "main.h"
/**
 * _strncpy - Function to copy a string
 * @dest: destination string
 * @src: the source string
 * @n: Number of bytes the string has
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0, index = 0;

	while (src[index++])
	{
		slen++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = slen; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
