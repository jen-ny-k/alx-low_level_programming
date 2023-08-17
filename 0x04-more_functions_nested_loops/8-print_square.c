#include"main.h"
#include<stdio.h>
/**
 * print_square - print square followed by a new line
 * @size: the size of the square
 */
void print_square(int size)
{
	int k, j;

	if (size <= 0)
		putchar('\n');
			for (k = 0; k < size; k++)
			{
				for (j = 0; j < (size); j++)
				{
					putchar('#');
				}
				putchar('\n');
			}
}
