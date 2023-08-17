#include"main.h"
#include<stdio.h>
/**
 * print_diagonal - print character diagonally
 * @n: variable
 */
void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
		putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (l = 0; l < k; l++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
