#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in reverse
 * @s: the string to be printed
 *Return: doesnot have a return
 */
void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	for (k -= 1; k >= 0; k--)
	{
		putchar(s[k]);
	}
	putchar('\n');
}
