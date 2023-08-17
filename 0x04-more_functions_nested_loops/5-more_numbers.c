#include "main.h"
#include <stdio.h>
/**
 *more_numbers - print certain numbers for 10 times
 *Return: void
 */
void more_numbers(void)
{
	int k, j;

	for (k = 0; k <= 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
