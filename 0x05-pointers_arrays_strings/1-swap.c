#include<stdio.h>
/**
 * swap_int - swap two integers a and b
 *
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Doesnot have a return type
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
