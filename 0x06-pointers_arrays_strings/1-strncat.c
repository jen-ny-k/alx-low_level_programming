#include "main.h"
/**
 * _strncat - concatenats 2 strings using n bytes
 * @dest: destination string
 * @src: source of the string
 * @n: the number of bytes
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int position = 0, dlen = 0;

	while (dest[position++])
		dlen++;
	for (position = 0; src[position] && position < n; position++)
		dest[dlen] = src[position];
	return (dest);
}
