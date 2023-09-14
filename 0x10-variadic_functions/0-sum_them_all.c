#include "variadic_functions.h"
/**
 * sum_them_all - Fuction that return sum of all parameters
 * @n: The number of arguments
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
