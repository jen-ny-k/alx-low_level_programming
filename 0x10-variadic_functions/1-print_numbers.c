#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function to print numbers in a parameter
 * @separator: string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}

