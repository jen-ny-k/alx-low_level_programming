#include "main.h"
/**
 * _strcmp - function compare two strings
 * @s1: first string
 * @s2: second string
 * Return: return string
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2 && *s1 == *s2; s1++, s2++)
	{}
	return (*s1 - *s2);
}
