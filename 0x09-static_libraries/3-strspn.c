#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets lengh of a prefix sub string
 * @s: number of bytes in the intitial segment
 * @accept: bytes fron accept
 * Return: return s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
