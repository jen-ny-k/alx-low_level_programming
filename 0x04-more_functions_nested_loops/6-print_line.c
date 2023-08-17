#include"main.h"
#include<stdio.h>
/**
 * print_line - printing a line
 * @n: number of lines to print
 * Return: 0 always
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		putchar('_');
	}
	putchar('\n');
}
