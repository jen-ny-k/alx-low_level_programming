#include "main.h"
#include <stdio.h>
/**
 * print_number - prints numbers
 * @n: The integer value
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		putchar(45);
		k = -k;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	putchar (k % 10 + '0');
}
