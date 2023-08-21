#include<stdio.h>
/**
 * _strlen - size of the string
 *
 * @s: Length of the string
 * Return: return length
 */
int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
		lenght++;
	return (lenght);
}
