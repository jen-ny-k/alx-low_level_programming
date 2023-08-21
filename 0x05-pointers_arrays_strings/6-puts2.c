#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every character of a string
 *
 *
 * @str: the string character
 * Return: no return
 */
void puts2(char *str)
{
	int i, k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
