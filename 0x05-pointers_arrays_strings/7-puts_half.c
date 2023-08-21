#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of a string
 *
 * @str: the string to be printed
 *
 * Return: none
 */
void puts_half(char *str)
{
	int k, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		k = (i - 1) / 2;
		k = k + 1;
	}
	else
	{
		k = i / 2;
	}
	for (; k < i; k++)
	{
		putchar(str[k]);
	}
	putchar('\n');
}
