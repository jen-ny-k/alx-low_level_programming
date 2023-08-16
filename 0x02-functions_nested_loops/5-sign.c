#include"main.h"
/**
 * print_sign - this is a prorotype to print a value
 *
 * @n: value
 *Description: n used with an if condition
 * Return: return 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

