#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: occurence of the string
 * @accept: bytes in tha string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return (0);
}
