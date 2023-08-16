#include "main.h"
/**
 *
 * print_alphabet_x10 - prints alphabets
 * Description - using putchar to print
 */
void print_alphabet_x10(void)
{
	int k;
	char j;

	for (k = 0; k < 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
