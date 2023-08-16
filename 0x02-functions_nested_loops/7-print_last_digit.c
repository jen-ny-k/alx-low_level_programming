#include"main.h"
/**
 *
 * print_last_digit - print the last digit
 *
 * @r: integer value
 * Description:  print a value with _putchar declaration
 *
 * Return: return the last digit r
 */
int print_last_digit(int r)
{
	int k;

	if (r < 0)
	{
		k = -1 * (r % 10);
	}
	else
	{
		k = (r % 10);
	}
	_putchar((k % 10)+ '0');
	return (k % 10);
}
