#include "main.h"
#include <stdio.h>
/**
 * sqrt_a - return square naumber of a
 * @a: square root
 * @b: natural number
 * Return: sqrt or 1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
		return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - square root function
 * @n: the number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
