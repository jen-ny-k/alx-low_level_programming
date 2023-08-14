#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry point
 *
 * Return: return zero
 */
int main(void)
{
	int low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low += 1;
	}
	putchar('\n');
	return (0);

}
