#include<stdio.h>

/**
 * main - program entry point
 *
 * Return: return 0 when successful
 */
int main(void)
{
	char k;
	for( k = 'a'; k <= 'z'; k++)
		if( k != 'e' && k != 'q')
			putchar(k);
	putchar('\n');
	return (0);

}
