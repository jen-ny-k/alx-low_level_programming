#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - function that return a pointer to an allocated space in memory
 * @str: The string
 * Return: the copied string
 */
char *_strdup(char *str)
{
	char *cpy;
	int count = 0, i;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	cpy = malloc(sizeof(char) * count + 1);
	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];
	return (cpy);
}
