#include<stdio.h>
/**
 * main - this is my main file
 *
 * Return: always return zero
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
		putchar(',');
		putchar(' ');
	}
	
	return (0);

}
