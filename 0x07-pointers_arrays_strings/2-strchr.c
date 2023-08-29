#include "main.h"
#include <stdio.h>
/**
 * _strchr - function tha locates a character in a string
 * @s: string
 * @c: first occurencce of the character
 * Return: return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
