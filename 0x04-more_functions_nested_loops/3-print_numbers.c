#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers from 0 to 9
 * Return: Always return 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
