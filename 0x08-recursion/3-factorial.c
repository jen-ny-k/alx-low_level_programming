#include "main.h"
#include <stdio.h>
/**
 * factorial - reutrn a factorial given a number
 * @n: the number given
 * Return: 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
