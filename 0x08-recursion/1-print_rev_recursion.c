#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function that print string in revese
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
