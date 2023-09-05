#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0, s2len = 0, i;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	string = malloc(sizeof(char) * s1len + s2len + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		string[s1len + i] = s2[i];
	return (string);
}
