#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function toprint string
 * @separator: between string
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(arg, char *);

		if (x == NULL)
			printf("nil");
		else
			printf("%s", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
