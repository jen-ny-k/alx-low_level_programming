#include<stdio.h>

/**
 * main - program entry point
 *
 * Return: return 0 when successful
 */
int main(void)
{
	int lower = 'a';
	while (lower <= 'z')
	{
		if (lower == 'e'|| lower == 'q')
		{
	lower += 1;
		}
		else 
		{
			putchar(lower);
			lower =+ 1;
		}
	}
	putchar('\n');
	return (0);

}
