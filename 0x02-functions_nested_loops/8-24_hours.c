#include"main.h"
/**
 * jack_bauer - my main
 *
 * Description: print time in minutes
 */
void jack_bauer(void)
{
	int k;
	int j;

	for (k = 0; k < 24; k++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
