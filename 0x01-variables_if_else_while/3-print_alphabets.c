#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: returns zero 
 */
int main(void)
{
	int low = 'a';
	int upper = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low += 1;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper += 1;
	}
	putchar('\n');
	return (0);

}
